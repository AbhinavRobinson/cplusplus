#include <iostream>
#include <limits.h>

/** Print Factorial
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  // declare small int
  short int num;

  std::cout << "Enter number to find factorial ? ";
  std::cin >> num;

  // limit between to avoid negative underflow
  if (num <= 0 || num >= 20)
  {
    std::cout << "Please give a valid input! (1-19)" << std::endl;
  }
  else
  {
    // Find factorial
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
      fac *= i;
    }

    std::cout << "Factorial of " << num << " is " << fac << std::endl;
  }

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}