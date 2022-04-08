#include <iostream>
#include <vector>
using namespace std;
// Guardar diez números enteros, dados por el usuario
// y mostrar los díez números.
int main () {
  vector<int> valores(10);
  cout << "Dame el valor 1" << endl;
  cin >> valores[0];
  cout << "Dame el valor 2" << endl;
  cin >> valores[1];
  cout << "Dame el valor 3" << endl;
  cin >> valores[2];
  cout << "Dame el valor 4" << endl;
  cin >> valores[3];
  cout << "Dame el valor 5" << endl;
  cin >> valores[4];
  cout << "Dame el valor 6" << endl;
  cin >> valores[5];
  cout << "Dame el valor 7" << endl;
  cin >> valores[6];
  cout << "Dame el valor 8" << endl;
  cin >> valores[7];
  cout << "Dame el valor 9" << endl;
  cin >> valores[8];
  cout << "Dame el valor 10" << endl;
  cin >> valores[9];

  for (int k=0; k< valores.size(); k++) {
    cout << valores[k] << endl;
  }
}