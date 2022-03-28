#include <iostream>
using namespace std;
int main () {
  int a, b, c; 
  cout << "Dame tres valores (a, b, c)" << endl; 
  cin >> a >> b >> c ;

  if (a > b) { // Verdadero si a es mayor que b
    if (a > c) {
      cout << "El mayor valor es a: " << a << endl;
    } else { // como a es mayor que b, c es mayor que a
      cout << "El mayor valor es c: " << c << endl;
    }
  } else {
    if (b > c) {
      cout << "El mayor valor es b:" << b << endl;
    } else {
      cout << "El mayor valor es c: " << c << endl;
    }
  }
}