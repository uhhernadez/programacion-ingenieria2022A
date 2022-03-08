#include <iostream>

enum class Semana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
enum class DiasHabiles {Lunes, Martes, Miercoles, Jueves, Viernes};

using namespace std;

int main () {
  Semana dia;
  dia = Semana::Lunes;
  switch((int)dia) {
    case (int)Semana::Lunes: cout << "Lunes" << endl; break;
    case (int)Semana::Martes: cout << "Martes" << endl; break;
    case (int)Semana::Miercoles: cout << "Miercoles" << endl; break;
    case (int)Semana::Jueves: cout << "Jueves" << endl; break;
    case (int)Semana::Viernes: cout << "Viernes" << endl; break;
    case (int)Semana::Sabado: cout << "Sabado" << endl; break;
    case (int)Semana::Domingo: cout << "Domingo" << endl; break;
    default: break;
  }

}