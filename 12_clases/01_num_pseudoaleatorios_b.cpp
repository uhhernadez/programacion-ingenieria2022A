#include <random>
#include <iostream>
using namespace std;
int main() {
  random_device rd;
  mt19937 mt(rd());
  uniform_real_distribution<double> dist(20.0, 22.0); 
  cout << dist(mt) << endl;
}