#include <iostream>
using namespace std;

int main () {
  int N = 5;
  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N-y; x++) {
      cout << '*';
    }
    cout << endl;
  }
}