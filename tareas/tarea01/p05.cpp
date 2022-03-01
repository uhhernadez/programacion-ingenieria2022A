#include <iostream>

int main () {
  float a,b;
  int c;
  std::cout << "numero a: ";
  std::cin >> a;
  std::cout << "numero b: ";
  std::cin >> b;
  std::cout << "numero c: ";
  std::cin >> c;
  std::cout<< "El promedio es: "<< (a+b+c)/3.0 << std::endl;
}