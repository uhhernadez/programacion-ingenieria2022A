#include <iostream>
#include <vector>
using namespace std;
/*
strct vector 
{
  unsigned int N;
  vec[100];
};
*/

float Promedio(vector<float> vec) {
  float sum = 0.0f;
  for(int k=0; k < vec.size(); k++) {
    sum += vec[k];
  }
  return sum / vec.size(); 
}

float Promedio (float v[100], int N) {
  float sum = 0.0;
  for (int i = 0; i < N ; i++) {
    sum += v[i];
  }
  return sum/N;
}

int Mux (int b, int c) {
  b = 100; c=30;
  int d = b*c ;
  return b*c;
}

void FuncionMisteriosa (vector<int> &v) {
  int temp, i , j;

  for (i = 0; i < v.size()-1; i++) {
    for (j = i + 1; j <v.size(); j++) {
      if(v[i] > v[j]) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}

int main () {
  vector<int> v{-3, 7, -9, 5, -7};
  FuncionMisteriosa(v);
  for (int num : v) {
    cout << num << endl;
  } 
  return 0;
}