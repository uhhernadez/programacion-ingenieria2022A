#include <iostream>
using namespace std;

int main () {
  int a;
  cout << "Dame un numero :" << endl;
  cin >> a;

  if (a % 2 == 0) {
    cout << "Es un numero par" << endl;
  } else {
    cout << "Es un numero impar" << endl;
  }

}