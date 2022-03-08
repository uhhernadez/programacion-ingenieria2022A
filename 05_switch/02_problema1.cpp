#include <iostream>
using namespace std;
int main () {
  int a, b;
  cout << "Dame el valor a: " << endl;
  cin >> a;
  cout << "Dame el valor b: " << endl;
  cin >> b;
  char operacion;
  cout << "Que operacion quieres realizar?" << endl;
  cout << " '+' sumar " << endl;
  cout << " '-' restar " << endl;
  cout << " '*' multiplicacion " << endl;
  cout << " '/' division " << endl;
  cin >> operacion;
  switch(operacion) {
    case '+': cout << "La suma es: "            << (a+b) << endl; break;
    case '-': cout << "La resta es: "           << (a-b) << endl; break;  
    case '*': cout << "La multiplicacion es: "  << (a*b) << endl; break;  
    case '/': cout << "La division es: "        << (a/b) << endl; break;  
    default : cout << "Operacion no soportada" << endl; break; 
  }
}