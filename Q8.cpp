#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector <string> commodity = { "water" , "bread" } ;
    vector <int> quantity = { 20 , 13 } ;
    vector <double> price = { 2 , 5 } ;

    int choice ;
    string addcommodity ;
    int addquantity ;
    double addprice ;
    int index ;
    int salequantity ;

    

    do{

        cout << "\n========== StoreHouse MENU ==========\n" ;
        cout << "1. Add commodity \n" ;
        cout << "2. sale commodity (Quantity reduction) \n";
        cout << "3. show StoreHouse \n" ;
        cout << "4. exit \n" ;
        cin >> choice ;

        //Add commodity

        if (choice == 1) {

         cout << "Enter the commodity you want add : ";
         cin >> addcommodity;

         cout << "Enter quantity : ";
         cin >> addquantity;

         cout << "Enter price : ";
         cin >> addprice;

         commodity.push_back(addcommodity);
         quantity.push_back(addquantity);
         price.push_back(addprice);

         cout << "Commodity added successfully!\n";

        }

        if (choice == 2) {

         cout << "Enter the index commodity you want sale : ";
         cin >> index ;

         cout << '\n';

         cout << "the commodity : " << commodity[index] << "Quantity : " << quantity[index] << '\n' ;
         cout << "enter Quantity you want to sale : " ;
         cin >> salequantity ;

         if ( salequantity > quantity[index] ) {

            cout << "The required procedure was not implemented because : \n" <<"The quantity required is not enough!!" ;
            break;

            cout << '\n';
        
         }

         

         else if ( salequantity <= quantity[index] ) {

            quantity[index] -= salequantity ;

            cout << "Commodity saled successfully!\n";

         }

         cout << '\n';

        }

        if (choice == 3) {

            for (int i = 0; i < commodity.size() ; i++) {

             cout << commodity[i] << " => " << "the Quantity : " << quantity[i] << " = " << price[i] << "$\n" ;
            }



         

        }

        cout << '\n' ;

    } while ( choice != 4 ) ;

    if (choice != 4) cout << "GOOD BYE!!" ; 
    
    

    

    
    
   
    
    
    return 0;
}
