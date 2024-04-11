#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int c=0;
    do{
        int number,choice,lower_lim,upper_lim,chance=0;
        int guess=0,i=1;
        system("cls");
        srand(time(0));
        cout<<"*****___NUMBER_GUESSING_GAME___*****"<<endl;
        cout<<"\nMake_A_Choice_About_Range:-"<<endl;
        cout<<"1:Easy_Level(10-100)\n2:Intermediate_Level(101-1000)\n3:Anvanced_Level(1001-10000)\n4:Create_Range\n\n>";
        cin>>choice;
        switch(choice){
            case 1:
                lower_lim=10;
                upper_lim=100;
                chance=20;
                cout<<"\nYou have 20 chances to guess the number"<<endl;
                break;
            case 2:
                lower_lim=100;
                upper_lim=1000;
                chance=15;
                cout<<"\nYou have 15 chances to guess the number"<<endl;
                break;
            case 3:
                lower_lim=1000;
                upper_lim=10000;
                chance=10;
                cout<<"\nYou have 10 chances to guess the number"<<endl;
                break;
            case 4:
                cout<<"Lower Limit: ";
                cin>>lower_lim;
                cout<<"Upper Limt: ";
                cin>>upper_lim;
                chance=7;
                cout<<"\nYou have 7 chances to guess the number"<<endl;
                break;    
            default:
                cout<<"Invalid Input"<<endl;
                continue;
        }
        i=1;
        number=(rand()%(upper_lim-lower_lim+1))+lower_lim;
        do{
            cout<<"\nGuess ("<<i<<"):-\n>";
            cin>>guess;
            if(guess<lower_lim || guess>upper_lim){
                cout<<"Your value is not in the limit.."<<endl;
                continue;
            }
            else if(number>guess){
                cout<<"Good Try!! But Guess Higher..."<<endl;
            }
            else if(number<guess){
                cout<<"Good Try!! But Guess Low"<<endl;
            }
            else if(number==guess){
                cout<<"That's Amazing!! You have guessed the correct number"<<endl;
                break;
            }
            i++;
        }while(number!=guess && chance+1!=i);
        if(i-1==chance){
            cout<<"\nYou have failed to guess the correct number!! Better luck next time..."<<endl;
        }
        cout<<"\n\nDo you want to continue:- \n";
        cout<<"1:YES\n2:NO\n";
        cout<<">";
        cin>>choice;

        if(choice==2){
            c=1;
            i=1;
            chance=0;
        }
    }while(c==0);
}