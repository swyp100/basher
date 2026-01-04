#include <iostream>
#include <string>



using namespace std;

int main() {

    cout << "\n===== WELCOME TO OASAID BANK =====\n";

    cout << '\n';

    cout << "= Please create your bank account :) = \n";

    cout << '\n';

    double balance = 0 ;
    string password ;
    string name ;
    char starter_BANKMENU;
    int choice;
    double Withdraw ;
    double Deposit ;
    string trypassword ;
    int attempts = 3;

    

    cout << "Enter your name : ";
    cin >> name ;

    cout << '\n';

    cout << "Enter your balance : ";
    cin >> balance ;

    cout << '\n';

    cout << "Enter your password (enter numbers and letters ) : "; 
    cin >> password ;

    cout << "\n== Now you are have account in OSAID BANK !! ==\n";

    cout << '\n';

    cout << "Are you want enter in the BANK MENU (Y/N)?";
    cin >> starter_BANKMENU ;

    cout << '\n';
    cout << '\n';

    
    
    

    while (starter_BANKMENU == 'Y' || starter_BANKMENU == 'y') {

        attempts = 3;

        while (attempts > 0) {

        cout << "enter your password (" << attempts << " attempts left): ";
        cin >> trypassword;

        if (trypassword == password) {

            cout << "Its correct !!\n";
            break;
        }

        else {

            attempts--;
            cout << "Its not correct!\n";
        }
    }

    if (attempts == 0) {
        
        cout << "You've run out of attempts\n";
        break;
    }
        
        

        if ( trypassword == password ) {


        do {

        cout << "\n===== BANK MENU =====\n";
        cout << "account name : " << name << '\n';
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit BANK\n";
        cout << '\n';
        cout << "Choose: ";

        cin >> choice ;

        if (choice <= 0 || choice > 4 ) {

        cout << "\n=== Your entry is incorrect ===\n";

        cout << "\n===== BANK MENU =====\n";
        cout << "account name : " << name << '\n';
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Show Balance\n";
        cout << "4. Exit BANK\n";
        cout << '\n';
        cout << "Choose: ";
        cin >> choice ;

        }

        //Withdraw

        if (choice == 1) {

         cout << "Enter the amount for withdrawal : ";
         cin >> Withdraw;

         if (Withdraw <= 0) {

          cout << "Invalid amount!\n";

         }

         else if (Withdraw > balance) {

          cout << "Your transaction was rejected because your bank balance is insufficient!";

         }

         else {

         balance -= Withdraw;

         cout << "Your transaction was Done\n";
         cout << "An amount has been withdrawn : ( " << Withdraw << " ) from your balance\n";

         }

         cout << '\n';
         cout << "This procedure has been ended\n";

        }

        //Deposit


        if (choice == 2) {

            cout << "Enter the amount for Deposit : ";
            cin >> Deposit ;

            if (Deposit <= 0) cout << "Invalid amount!\n";

            else {

             balance += Deposit ;

             cout << "Your transaction was Done\n" << "An amount has been Deposit :" << " ( " << Deposit << " ) " << "to your balance\n";

            } 

            cout << '\n';

            cout << "This procedure has been ended\n";

        }

        //show

        if (choice == 3) {

            cout << "your money in OSAID BANK : " << balance << endl ;

            cout << "This procedure has been ended\n";

        }

        cout << '\n';



        } while (choice != 4);
        
            
        
        

        
    }

    else cout << "GOODBY";

    if (choice == 4) cout << "We were happy to serve you. Come back soon :)" ;



    }


 
    return 0;
}
