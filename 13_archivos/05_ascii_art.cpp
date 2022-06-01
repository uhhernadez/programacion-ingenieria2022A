#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Paisaje {
  vector<string> ascii;

  Paisaje(string ruta) {
    ifstream fuente(ruta);
    if(!fuente.is_open()) {
      cout << "El archivo no existe" << endl;
      return;
    }
    string linea;
    while(getline(fuente, linea)) {
      ascii.push_back(linea);
    }
    fuente.close();
  }

  void Mostrar() {
    for (string str: ascii) {
      cout << str << endl;
    }
  }
};

int main () {
  Paisaje p1("rainbow.txt");
  Paisaje p2("rainbow2.txt");
  p1.Mostrar();
  p2.Mostrar();
  return 0;
}