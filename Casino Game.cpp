#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>

using namespace std;

void rules()
{
    system("cls");
    cout << "\t\t ======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t 1. Choose a number between 1 to 10\n";
    cout << "\t 2. Winner gets 10 times of the money bet\n";
    cout << "\t 3. Wrong bet, and you lose the amount you bet\n\n";
}

int main()

{
    string playerName;
    int balance; 
    int bettingAmount;
    int guess;
    int dice; 
    char choice='y';
    srand(time(0));
    
    cout << "\n\t\t========WELCOME TO THE CASINO GUESSING GAME=======\n\n";
    cout << "\n\nWhat's your Name : ";
    cin>>playerName;
    
    cout << "\n\nEnter the starting balance to play game : $";
    cin >> balance;
    
	while(choice =='Y'|| choice=='y'){
		
		system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << balance << endl<<endl;
        
        cout << "Hey, " << playerName<<", enter amount to bet : $";
        cin >> bettingAmount;
        cout<<endl;
            
            if(bettingAmount > balance){
	
                cout << "Betting amount can't be more than current balance!"<<endl<<endl;
                       cout <<"Re-enter betting amount: ";
                       cin>> bettingAmount;}
                       
    if(bettingAmount < balance){
    	
    	cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            cout<<endl<<endl;
            
            if(guess <= 0 || guess > 10){
                cout << "Number should be between 1 to 10 !"<<endl<<endl;
                cout<<"Re-enter number: ";
                cin>>guess;}
            
        if(guess >= 0 && guess < 10){
        dice = rand()%10 + 1;
        
        
        if(dice == guess)
        {
            cout << "\n\nYou are in luck!! You have won: $" << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << balance << "\n";
        
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
	}
		}
		cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    		}
    
    
    system("cls");
    cout << "\n\nThanks for playing the game. Your balance is $ " << balance << "\n\n";


    return 0;
}

