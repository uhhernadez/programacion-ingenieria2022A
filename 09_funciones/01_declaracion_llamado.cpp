#include <iostream>
using namespace std;

void mostrar_nombre() {
  cout << "Uriel" << endl;
}

int SumaDosEnteros(int a, int b) {
  int sum = a + b;
  return sum;
}

int main () {
  cout << SumaDosEnteros(10, 24) << endl;
  cout << SumaDosEnteros(1, 2) << endl;
  cout << SumaDosEnteros(0, 4) << endl;
  cout << SumaDosEnteros(0, 0) << endl;
  cout << SumaDosEnteros(3, 2) << endl;
  cout << SumaDosEnteros(5, 7) << endl;
}