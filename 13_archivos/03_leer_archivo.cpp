#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ifstream archivo("archivo.txt");

  if(!archivo.is_open()) {
    cout << "El archivo no existe " << endl;
    return 0;
  }
  string palabra;
  archivo >> palabra;
  cout << palabra << endl;

  archivo >> palabra;
  cout << palabra << endl;
  
  archivo >> palabra;
  cout << palabra << endl;

  archivo.close();
  return 0;
}