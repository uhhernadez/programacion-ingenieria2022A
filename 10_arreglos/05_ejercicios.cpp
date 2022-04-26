#include <iostream>
#include <vector>
using namespace std;

vector<int> IniciaArreglo (int tamanio, int valor_inicial) {
  vector<int> valores(tamanio);  
  for (int k = 0; k < valores.size(); k++) {
    valores[k] = valor_inicial;
  }
  return valores;
}

int main () {
  vector<int> a1 = IniciaArreglo(13, 3);
  vector<int> a2 = IniciaArreglo(5, -3);
  vector<int> a3 = IniciaArreglo(100, 0);
  return 0;
}
