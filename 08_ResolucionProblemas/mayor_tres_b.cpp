#include <iostream>
using namespace std;
int main () {
  int a, b, c; 
  cout << "Dame tres valores (a, b, c)" << endl; 
  cin >> a >> b >> c ;

  if (a > b && a > c) {
    cout << "El mayor valor es a: " << a << endl;
  } else {
    if (b > a && b > c) {
      cout << "El mayor valor es b: " << b << endl;
    } else {
      if ( c > b && c > a) {
        cout << "El mayor valor es c: " << c << endl;
      }
    }
  }
/*
  if (a > b && a > c) {
    cout << "El mayor valor es a: " << a << endl;
  }
  if (b > a && b > c) {
    cout << "El mayor valor es b: " << b << endl;
  }
  if (c > a && c > b) {
    cout << "El mayor valor es c: " << c << endl;
  }
  */
/*
  if (a < b < c) {

  }
*/

}