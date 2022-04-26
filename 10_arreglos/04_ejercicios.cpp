#include <iostream>
#include <vector>
using namespace std;

void ImprimirLosValores(vector<int> valores) {
  cout << valores[0] << endl;
  cout << valores[1] << endl;
  cout << valores[2] << endl;
  cout << valores[3] << endl;
  cout << valores[4] << endl;
  cout << valores[5] << endl;
}


int main () {
  vector<int> valores(6);
  valores[0] = 100;
  valores[1] = 101;
  valores[2] = 102;
  valores[3] = 103;
  valores[4] = 104;
  valores[5] = 105;
  ImprimirLosValores(valores);

  return 0;
}
