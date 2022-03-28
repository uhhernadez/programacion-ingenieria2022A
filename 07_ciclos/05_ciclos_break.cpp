#include <iostream>
using namespace std;
int main () {
  for(;;) { 
    cout << "Ciclo infinito" << endl;
    char operacion;
    cout << "Dime que operacion quieres realizar: \n";
    cout << "+ sumar \n";
    cout << "- restar \n";
    cout << "s salir \n";
    cin >> operacion;
    
    if (operacion == 's') {
      break;
    } else {
      // Realizar operacion
    }
  }  
}