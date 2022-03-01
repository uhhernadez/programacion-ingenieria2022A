#include <iostream>
using namespace std;
int main () {
  int a = 10, b =3;
  if ( a > b ) {
    // Condición verdadera
    // Se cumple la condición
    cout << "La variable a es mayor que b" << endl;
  } else {
    // Caso complemento, caso contrario, cuando no se cumple
    cout << "La variable a no es mayor que b" << endl;
  }
}