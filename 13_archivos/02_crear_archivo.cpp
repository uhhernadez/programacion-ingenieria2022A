#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream archivo("archivo.txt");
  float pi = 3.1416;
  int num = 3;
  archivo << "Hola mundo desde el archivo de texto\n";
  archivo << num << "\n";
  archivo << pi << "\n";
  archivo.close();
  return 0;
}