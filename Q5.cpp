//The assistance and search and AI were used to understand the second largest part of the number

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int i ;
    double marks ;
    int SpassC = 0 ;
    int SfallC = 0 ;
    

    cout << "enter student num : ";
    cin >> i ;

    vector <double> Smarks ( i , 0) ;

    double max = -1 ;
    double secmax = -1;
    double min = 101 ;

    cout << '\n';


    for (int x = 0 ; x < i ; x++) {

        cout << "enter student" << " ( " << x+1 << " ) " << "marks :" ;
        cin >> marks ;
        Smarks[x] = marks ;
        cout << '\n' ;
        cout << "Added!\n" ;

        if (Smarks[x] >= 50) {

            SpassC++ ;

        }

        else if (Smarks[x] < 50) {

            SfallC++ ;

        }

        if (Smarks[x] > max) {

         secmax = max;
         max = Smarks[x];

        }

        else if (Smarks[x] < max && Smarks[x] > secmax) {

          secmax = Smarks[x];

        }

        if (Smarks[x] < min) {

         min = Smarks[x];

        }


        cout << '\n';


    }

    cout << '\n';

    cout << "pass student : " <<  SpassC << endl ;
    cout << "fall student : " <<  SfallC << endl ;
    cout << "themax mark : " << max << endl ;
    cout << "secmax mark : " << secmax << endl ;
    cout << "min mark : " << min << endl;

    return 0;
}
