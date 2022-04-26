#include <iostream>
#include <vector>
using namespace std;
// Guardar diez números enteros, dados por el usuario
// Pedir un valor extra y verificar si este valor existe en el arreglo
int main () {
  vector<int> valores(10);
  int num;
  bool existe = false;
  for (int k=0; k< valores.size(); k++) {
    cout << "Dame el valor "<<(k+1)<< endl;
    cin >> valores[k];
  }
  cout <<"Dame el valor a buscar" << endl;
  cin >> num;
  for (int k=0; k < valores.size(); k++) {
    if (num == valores[k]) {
      cout << "Si existe en el arreglo FOR" <<endl;
      existe = true;
    }
  }
  if(!existe ) {
    cout << "No existe el numero en el arreglo" << endl;
  }
  if ( num == valores[0] || num == valores[1] || 
       num == valores[2] || num == valores[3] || 
       num == valores[4] || num == valores[5] || 
       num == valores[6] || num == valores[7] || 
       num == valores[8] || num == valores[9]) {
    cout << "Si existe en el arreglo OR" <<endl;
  } else {
    cout << "No existe en el arreglo OR" <<endl;
  }
}