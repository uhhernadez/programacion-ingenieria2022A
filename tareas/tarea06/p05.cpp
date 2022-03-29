#include <iostream>
using namespace std;

void ImprimirLineaConEspacios(int N) {
  for (int x = 0; x < N; x++) {
    if (x == 0 ) {
      cout << '*';
    } else if (x == N-1) {
      cout << '*';  
    } else {
      cout << ' ';
    }
  }
  cout << endl;
} 

int main () {
  int N = 6;
  for ( int y = 0; y < N; y++) {
    if( y == 0 ) {
      for (int x=0; x < N; x++) {
        cout << '*';
      }
      cout << endl;
    } else if ( y == N-1) {
      for (int x=0; x < N; x++) {
        cout << '*';
      }
      cout << endl;

    } else {
      ImprimirLineaConEspacios(N);
    } 
  }
}