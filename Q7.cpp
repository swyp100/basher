#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int N ;
  int M ; 
  int NUMENTER ;
  int Rowssum = 0 ;
  int Columnssum = 0 ;
  int Rowsmax = -1000000 ;
  int Columnsmax = -1000000 ;



  cout << "enter Rows num : " ;
  cin >> N ; 

  cout << "enter Columns num : " ;
  cin >> M ;
  

  vector <vector <int>> NxM (N, vector <int> (M, 0 ));

  for (int i = 0; i < N; i++) {
                 
     for (int j = 0; j < M; j++) { 

        cout << "enter num " << " ( " << i << "-" << j << " ) " << '\n'; 
        cin >> NUMENTER ;

        NxM [i][j] = NUMENTER ;

     }

 }

    cout << "your array : \n" << '\n' ;

    for (int i = 0; i < N; i++) {
                 
     for (int j = 0; j < M; j++) { 

       cout << NxM [i][j] << " " ;

       
     }
     
     cout << '\n';


    } 

    

    //row sum

    cout << "== Rows sum : == \n" ;

    for (int i = 0; i < N; i++) {

         Rowssum = 0 ;
                 
     for (int j = 0; j < M; j++) { 

        Rowssum += NxM [i][j] ;

        
     }

     if ( Rowssum > Rowsmax) Rowsmax = Rowssum ;


      cout << "Row" << " ( " << i+1 << " ) " << "sum = " << Rowssum << endl ;
      


    } 

    cout << '\n';

    cout << "the big Row sum : " << Rowsmax ;

    cout << '\n';

    

    // Columns sum

    cout << "== Columns sum : == \n" ;

    for (int j = 0; j < M ; j++) {

        Columnssum = 0 ;
                 
     for (int i = 0; i < N; i++) {  

        Columnssum += NxM [i][j] ;

     }

        if ( Columnssum > Columnsmax ) Columnsmax = Columnssum ;

        

        cout << "Column" << " ( " << j+1 << " ) " << "sum = " << Columnssum << endl ;
       


    } 

    cout << '\n';

    cout << "the big Column sum : " << Columnsmax ;

    cout << '\n';

     cout << "== the bigist betwen the big row and the big Column is  : == \n" ;

     if (Columnsmax > Rowsmax ) cout << " the Column = " << Columnsmax ;
     else if (Columnsmax < Rowsmax ) cout << " the row = " << Rowsmax ;
     else if (Columnsmax == Rowsmax ) cout << "the Column = the row ";
     else cout << "some wrong !" ;





    









    

    
    return 0;
}
