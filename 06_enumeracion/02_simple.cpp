#include <iostream>
enum Semana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
using namespace std;
int main () {
  Semana dia;
  dia = (Semana)8;
  switch(dia) {
    case Lunes: cout << "Lunes" << endl; break;
    case Martes: cout << "Martes" << endl; break;
    case Miercoles: cout << "Miercoles" << endl; break;
    case Jueves: cout << "Jueves" << endl; break;
    case Viernes: cout << "Viernes" << endl; break;
    case Sabado: cout << "Sabado" << endl; break;
    case Domingo: cout << "Domingo" << endl; break;
    default: cout<< "Este dia no existe" <<endl; break;
  }

}