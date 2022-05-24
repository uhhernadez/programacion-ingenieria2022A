#include <iostream>
#include <cstdlib> 
#include <ctime> 
  
int main()
{
  std::srand(static_cast<unsigned int>(std::time(nullptr))); 
  std::cout << std::rand() << "\t";
  return 0;
}