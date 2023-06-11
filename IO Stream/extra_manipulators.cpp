#include <iomanip>
#include <iostream>

int main() {
  double pi = 3.141592653589793;
  int number = 42;

  std::cout << std::setprecision(5) << pi << std::endl;
  std::cout << std::fixed << std::setprecision(2) << pi << std::endl;
  std::cout << std::scientific << std::uppercase << pi << std::endl;
  std::cout << std::showpos << number << std::endl;
  std::cout << std::setw(8) << std::setfill('*') << number << std::endl;

  return 0;
}
