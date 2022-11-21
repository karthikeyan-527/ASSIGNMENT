#include <iostream>
using namespace std ;

int main () {
  //Assignment operator
  
int z = 20 ;
   z += 5 ;
   cout << z << endl ;
 
int a = 7 ;
  a -= 4 ;
  cout << a << endl ;

int b = 42 ;
  b /= 7 ;
  cout << b << endl ;

int c = 50 ;
  c |= 45 ;
  cout << c << endl ;
  
int x = 55 ;
   x &= 7 ;
   cout << x << endl << endl ;

//comparison operators
     // true (1) or false (0)
int m = 5  ;
int n = 10 ;

  cout << (m == n) << endl ; //equal to
  cout << (m != n) << endl ; //not equal to
  cout << (m <= n) << endl ; //less than or equal to
  cout << (m < n)  << endl ; //less than
  cout << (m > n)  << endl << endl ; //greater than

 // logical operators

  int r = 6  ;
  int g = 12 ;
cout << ( r < g && r < 10 ) << endl ; //logical and
cout << ( r < 12|| r > 2) << endl ; // logical or 
cout << (!(r > 3 && r < 12) )<< endl ; // logical not
  return 0 ;
  
}