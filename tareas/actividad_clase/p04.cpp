#include <iostream>
using namespace std;
int main() {
/*
  +
 +++
+++++      
*/
int N = 5;
for (int x=0; x < N; x++) {
  int columnas = 2*x +1;
  for (int y = 0; y < N-x-1; y++ ) {
    cout << ' ';
  }
  for(int y = 0; y < columnas; y++){
    cout << '+';
  }
  cout << endl;
}


}