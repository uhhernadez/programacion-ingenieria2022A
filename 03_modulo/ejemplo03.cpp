#include <iostream>
#include <iomanip>
int main () {
  //double pi = 3.141592653589793238462643;
  double pi = 3.1415;
  std::cout << "Salto de linea \n";
  std::cout << std::fixed;
  std::cout << "\t esto agrega un espacio" << std::endl;
  std::cout << std::setprecision(2) << pi  << std::endl;
  std::cout << std::setprecision(3) << pi  << std::endl;
  std::cout << std::setprecision(4) << pi  << std::endl;
  std::cout << std::setprecision(5) << pi  << std::endl;
  std::cout << std::setprecision(6) << pi  << std::endl;
}