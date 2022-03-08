#include <iostream>
using namespace std;
int main () {
  int sel = 2;
  switch (sel) {
    case 0: cout << "Caso 0" << endl; break;
    case 1: cout << "Caso 1" << endl; break;
    case 2: cout << "Caso 2" << endl; break;
    default: cout << "Caso por defecto" << endl; break;
  }
}