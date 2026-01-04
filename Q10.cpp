#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
   int employee ;
   double rate1 ;
   double rate2 ;
   double rate3 ;
   double sumrate ;
   double avrrate ;

   

   cout << "enter employee num : " ;
   cin >> employee ;

   cout <<'\n' ;

   vector <double> employee_rate1 (employee , 0) ;
   vector <double> employee_rate2 (employee , 0) ;
   vector <double> employee_rate3 (employee , 0) ;
   vector <double> employee_avr (employee , 0) ;
   vector <string> employee_evaluation (employee , "") ;

   string evaluation ;

   for (int i = 0 ; i < employee ; i++) {

    cout << "enter employee " << i+1 << " behavior rate (? / 100 ) : " ;
    cin >> rate1 ;

    cout <<'\n' ;

    cout << "enter employee " << i+1 << " expertise rate (? / 100 ) : " ;
    cin >> rate2 ;

    cout <<'\n' ;

    cout << "enter employee " << i+1 << " capacity rate (? / 100 ) : " ;
    cin >> rate3 ;

    cout <<'\n' ;

    sumrate = (rate1 + rate2 + rate3 ) ;
    avrrate = sumrate / 3 ;

    cout << "employee " << i+1 << "rate : " ;

    if ( avrrate >= 85 ) { 
        cout << "excellent !!"<< endl ;
        evaluation = "excellent !!" ;
    }
        

    else if ( avrrate >= 75 )  {
        cout << "good"<< endl ;
        evaluation = "good" ;
    }

    else if ( avrrate >= 50 ) {
        cout << "Needs improvement !"<< endl ;
        evaluation = "Needs improvement !" ;
    }

    else {
        cout << "Fail"<< endl ;
        evaluation = "Fail" ;
    }
   

    employee_rate1 [i] = rate1 ;
    employee_rate2 [i] = rate2 ;
    employee_rate3 [i] = rate3 ;
    employee_avr [i] = avrrate ;
    employee_evaluation [i] = evaluation ;

    cout <<'\n' ;


   }

   for (int x = 0; x < employee; x++) {

        cout << "Employee ( " << x + 1 << " ) " ;

        cout << "\n = Rates =\n";
        cout << "behavior : " << employee_rate1 [x] << '\n' ;
        cout << "expertise : " << employee_rate2 [x] << '\n';
        cout << "capacity : " << employee_rate3 [x] << '\n';

        cout << "\n= AVR =\n" ;
        cout << "AVR : " << employee_avr [x] << '\n' ;

        cout << "\n=Evaluation=\n" ;
        cout << "eval : " << employee_evaluation [x] << '\n';
    
    }


    
    
    return 0;
}
