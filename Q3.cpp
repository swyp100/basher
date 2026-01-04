#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int stuNUM;
    int defultNUM = 0 ;
    int attendance ;
    char starter ;
    string name ;


    cout << "Enter student num : ";
    cin >> stuNUM ;

    cout << '\n';
    
    vector <string> studentCOD (stuNUM , "" ) ;
    vector <string> studentNAME (stuNUM , "" ) ;
    vector <int> studentatte ( stuNUM , defultNUM);

    

        for (int i = 0; i < stuNUM ; i++) {

        cout << i + 1 << "." ;
        

        cout << "enter student name : "; 
        cin >> name ;
        studentNAME[i] = name ;

        cout << '\n';

        cout << "enter student  attendance (?/30): ";
        cin >> attendance ;

        while (attendance < 0 || attendance > 30) {

            cout << "not correct :( \n" ;
            cout << "enter student  attendance (?/30): ";
            cin >> attendance ;
            

        }

        if (attendance <= 30 && attendance > 0 ) cout << "Added !!\n";
        
        studentatte[i] = attendance ;

        if (attendance >= 27) studentCOD[i] = "VERY GOOD !";
        if (attendance >= 20) studentCOD[i] = "GOOD";
        if (attendance < 20 ) studentCOD[i] = "BAD !";


        cout << '\n';

    
    }


   cout << "\n======== Report ========\n";

    for (int x = 0; x < stuNUM ; x++) {

     cout << x + 1 << "." << studentNAME[x] << " => " << studentatte[x] << " attendance : " << studentCOD[x] <<'\n';

    }
    



 
    return 0;
}
