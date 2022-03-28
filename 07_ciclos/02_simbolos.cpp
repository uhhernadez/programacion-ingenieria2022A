#include <iostream>
using namespace std;
int main () {
  char c = '+';
  int N = 50;
  for (int i = 0; i < N; i++ ) {
    for (int j = 0; j < N; j++) {
      cout << c;
    } 
    cout << endl;
  }
}