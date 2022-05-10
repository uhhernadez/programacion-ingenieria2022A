#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Gato
{
  string nombre;
  float peso;
  float edad;
};
void MostrarInformacionGato(string nombre,
                            float edad,
                            float peso)
{
  cout << nombre << " " << edad << " " << peso << endl;
}

void IniciaGato(Gato &g, string nombre, float edad, float peso)
{
  g.nombre = nombre;
  g.edad = edad;
  g.peso = peso;
}

void MostrarInformacionGato(Gato g)
{
  cout << g.nombre << " edad: " << g.edad << " peso: " << g.peso << endl;
}

int main()
{
  vector<Gato> gatos(3);
  IniciaGato(gatos[0], "Michi", 1.0, 4.0);
  IniciaGato(gatos[1], "Copo", 11.0, 2.0);
  IniciaGato(gatos[2], "Felpuchina", 2.0, 5.0);
  // MostrarInformacionGato(gatos[0]);
  // MostrarInformacionGato(gatos[1]);
  // MostrarInformacionGato(gatos[2]);
  for (Gato &g : gatos)
  {
    g.peso = 10;
    MostrarInformacionGato(g);
  }

  return 0;
}