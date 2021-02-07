#include <iostream>
#include <limits.h>

/** Print Gross Salary
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  int base;
  float da, hra;

  std::cout << "Enter Base Salary$ ? ";
  std::cin >> base;
  std::cout << "Enter DA% ? ";
  std::cin >> da;
  std::cout << "Enter HRA% ? ";
  std::cin >> hra;

  // find gross salary
  int salary = base + (da / 100) * base + (hra / 100) * base;

  std::cout << "Salary is " << salary << std::endl;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}