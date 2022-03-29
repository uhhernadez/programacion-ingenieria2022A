#include <iostream>
using namespace std;

int main () {
  int N = 5;
  for (int j = 0; j < N; j++) {
    cout << j +1 ;
    for (int k = 0; k < j+1; k++) {
      cout << '*';
    }
    cout << endl;
  }
}