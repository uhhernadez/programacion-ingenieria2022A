#include <iostream>
#include <string>
using namespace std;
int leerDesdeElTeclado(string mensaje) {
  int num;
  cout << mensaje << endl;
  cin >> num;
  return num;
}
int main () {
  int a, b, c;
  a = leerDesdeElTeclado("Dame  a");
  b = leerDesdeElTeclado("El valor de b");
  c = leerDesdeElTeclado("c?");
  cout << "Los valores son " << a << ", " << b << ", " << c << endl;
  return 0;
}