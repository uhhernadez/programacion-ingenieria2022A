#include <iostream>
#include <vector>
using namespace std;
// Guardar diez números enteros, dados por el usuario
// y mostrar los díez números.
int main () {
  vector<int> valores(10);
  for (int k=0; k< valores.size(); k++) {
    cout << "Dame el valor "<<(k+1)<< endl;
    cin >> valores[k];
  }
  for (int k=0; k< valores.size(); k++) {
    cout << valores[k] << endl;
  }
}