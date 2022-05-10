#include <iostream>
#include <string>
using namespace std;

void MostrarInformacionGato(string nombre, 
                            float edad, 
                            float peso) {
  cout << nombre << " " << edad << " " << peso << endl;                            
}
int main () {
  string nombres[] = {"Michi", "Copo", "Jacinta"};
  float edades[] ={1.0, 11.0, 2.0};
  float pesos[] ={4.0, 2.5, 4.0};

  MostrarInformacionGato(nombres[0], edades[0], pesos[0]); 
  MostrarInformacionGato(nombres[1], edades[1], pesos[2]); 
  MostrarInformacionGato(nombres[2], edades[0], pesos[2]); 

  for (int k=0; k < 3; k++) {
    MostrarInformacionGato(nombres[k], edades[k], pesos[k]); 
  }
  return 0;
}