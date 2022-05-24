#include <random>
#include <iostream>
using namespace std;

struct Dado {
  int numeroCaras;
  random_device rd;

  Dado (int nc) {
    numeroCaras = nc;
  }

  int Tirar() {
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1, numeroCaras); 
    return round(dist(mt));
  }
};


int main() {
  Dado d6(6), d4(4), d20(20);
  //cout << "Dado 6 " << d6.Tirar() << endl;
  //cout << "Dado 4 " << d4.Tirar() << endl;
  cout << "Estas apuntando hacia un profundo,"
          " tira un dado, para saber si le das con la bala \n";
  
  int punteria = 3;

  if(punteria < d20.Tirar()) {
    cout << "El profundo el muere " << endl;
  } else {
    cout << "Fallaste, mueres" << endl;
  }
}