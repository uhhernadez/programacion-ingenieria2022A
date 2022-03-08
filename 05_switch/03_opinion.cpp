#include <iostream>
using namespace std;
int main () {
  int calificacion;
  cout << "Dime tu calificacion de 1 a 10 : " << endl;
  cin >> calificacion;
  switch (calificacion) {
    case 0: cout << "(0) Mejora! " <<endl; break;
    case 1: cout << "(1) Si se puede echale ganas" <<endl; break;
    case 2: cout << "(2) Estudia pa la siguiente" <<endl; break;
    case 3: cout << "(3) Ahi la lleva" <<endl; break;
    case 4: cout << "(4) Ya ni modo" <<endl; break;
    case 5: cout << "(5) Sigue participando" <<endl; break;
    case 6: cout << "(6) Este truco solo se puede hacer una vez?" <<endl; break;
    case 7: cout << "(7) Pasar es pasar" <<endl; break;
    case 8: cout << "(8) Ta bien" <<endl; break;
    case 9: cout << "(9) Quedaste a nada " <<endl; break;
    case 10: cout << "(10) Es tu obligacion " <<endl; break;
    default : cout << " D2? " << endl; break;
  }

}