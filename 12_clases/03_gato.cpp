#include <random>
#include <iostream>
using namespace std;

struct Gato {
  float edad;
  Gato() {
    edad = 0;
  }
  void Raguniar() {
    if(edad>15) {
      cout<< "No puedo estoy muerto" << endl;
      return;
    }
    cout << "zaaaaz" << endl;
    edad+=0.5;
    //edad = edad + 0.5;
  } 

  void Maullar() {
    if(edad>15) {
      cout<< "No puedo estoy muerto" << endl;
      return;
    }
    cout << "Miiaauu" << endl;    
    edad+=0.5;
  } 

  void Comer() {
    if(edad>15) {
      cout<< "No puedo estoy muerto" << endl;
      return;
    }
    cout << "nium, nium, nium, nium,..." << endl;
    edad+=0.5;
  }
  void Dormir() {
    if(edad>15) {
      cout<< "No puedo estoy muerto" << endl;
      return;
    }
    cout << "zzzzZZzzzzZZZzzz" << endl;
    edad+=0.5;
  }
};

int main() {
  Gato felpu;
  for (int k=0; k < 15; k++) {
    felpu.Comer();
    felpu.Dormir();
    felpu.Maullar();
    felpu.Dormir();
    felpu.Comer();
    cout << felpu.edad << endl;
  }
}