#include <iostream>
#include <string>
using namespace std;

void MostrarInformacionGato(string nombre, 
                            float edad, 
                            float peso) {
  cout << nombre << " " << edad << " " << peso << endl;                            
}
int main () {
  string nombre1="Michi", nombre2="Copo", nombre3="Jacinta";
  float edad1=1.0, edad2=11.0, edad3=2.0;
  float peso1=4.0, peso2=2.5, peso3=4.0;
  MostrarInformacionGato(nombre1, edad1, peso1); 
  MostrarInformacionGato(nombre2, edad2, peso2); 
  MostrarInformacionGato(nombre3, edad3, peso3); 

  return 0;
}