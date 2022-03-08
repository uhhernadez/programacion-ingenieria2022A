#include <iostream>
using namespace std;
int main() {
  int respuesta;
  cout << "Tienes un problema?\n 0 - No, 1 - Si " << endl;
  cin >>respuesta;

  if (respuesta != 0 ) {
    cout << "Tiene solucion?\n 0 - No, 1 - Si " << endl;
    cin >> respuesta;
    if (respuesta !=0 ) {
      cout << "Solucionalo " << endl;
      cout << "Se soluciono? \n 0 - No, 1 - Si " << endl;
      cin >> respuesta;
      if (respuesta == 0 || respuesta == 1) {
        cout << "No te preocupes" << endl;
      }
    } else {
      cout << "No te preocupes " << endl;
    }
  } else {
    cout << "No te preocupes" << endl;
  }

}