#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> valores(9);
  
  for (int k = 0; k < valores.size(); k++) {
    valores[k] = 1;
    cout << k << " "<< valores[k] << endl;
  }
}
