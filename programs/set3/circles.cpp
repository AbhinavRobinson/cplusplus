#include <iostream>
#include <limits.h>
#include <numeric>

int main()
{
  std::cout << "Finds area of circles" << std::endl;
  int r1, r2;

  std::cout << "Enter first radius ? ";
  std::cin >> r1;

  std::cout << "Enter second radius ? ";
  std::cin >> r2;

  std::cout << r1 << " " << r2 << std::endl;
  return 0;
}