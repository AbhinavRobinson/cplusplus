#include <iostream>
#include <limits.h>

/** Print Factorial
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  int num;

  std::cout << "Enter number to find factorial ? ";
  std::cin >> num;

  if (num <= 0)
  {
    std::cout << "Please give a valid input!" << std::endl;
  }
  else
  {
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