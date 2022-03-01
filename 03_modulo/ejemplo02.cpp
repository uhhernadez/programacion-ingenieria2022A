#include <iostream>

int main () {
  int a = 10;
  int b = 3;
  std::cout << " ( a > b ) " << ( a > b ) <<" a=" << a << " b="<< b << std::endl;
  std::cout << " ( a < b ) " << ( a < b ) <<" a=" << a << " b="<< b << std::endl;
  std::cout << " ( a == b ) " << ( a == b ) <<" a=" << a << " b="<< b << std::endl;
  std::cout << " ( a = b ) " << ( a = b ) <<" a=" << a << " b="<< b << std::endl;
  std::cout << " ( a != b ) " << ( a != b ) <<" a=" << a << " b="<< b << std::endl; 
  std::cout << " ( a <= b ) " << ( a <= b ) <<" a=" << a << " b="<< b << std::endl;
  std::cout << " ( a >= b ) " << ( a >= b ) <<" a=" << a << " b="<< b << std::endl;
}