#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Gato {
  string nombre;
  float peso;
  float edad;
};
void MostrarInformacionGato(string nombre, 
                            float edad, 
                            float peso) {
  cout << nombre << " " << edad << " " << peso << endl;                            
}

void IniciaGato (Gato &g, string nombre, float edad, float peso) { 
  g.nombre = nombre;
  g.edad = edad;
  g.peso = peso;
}

void MostrarInformacionGato(Gato g) {
  cout << g.nombre << " " << g.edad << " " << g.peso << endl;
}

int main () {
  Gato michi, copo;
  vector<Gato> gatos(2);
  IniciaGato(michi, "Michi", 1.0, 4.0);
  IniciaGato(copo, "Copo", 11.0, 2.0);
  MostrarInformacionGato(michi);                       
  MostrarInformacionGato(copo);                       
  return 0;
}