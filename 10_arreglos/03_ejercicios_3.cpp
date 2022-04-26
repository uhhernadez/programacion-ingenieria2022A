#include <iostream>
#include <vector>
using namespace std;
// Guardar diez números enteros, dados por el usuario
// Contar el número de números positivos
// Contar el número de números negativos
// Contar el número de números pares
// Contar el número de números impares
// El número de ceros
int ContarNumerosPositivos(vector<int> nums) {
  int contador = 0;
  for (int k=0; k < nums.size(); k++) {
    if (nums[0] >= 0) {
      contador++;
    }
  }
  return contador;
}
int main () {
  vector<int> valores(10);
  for (int k=0; k< valores.size(); k++) {
    cout << "Dame el valor "<<(k+1)<< endl;
    cin >> valores[k];
  }
  cout << "El numero de positivos es: " << ContarNumerosPositivos(valores) << endl;
}