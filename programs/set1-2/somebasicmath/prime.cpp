#include <iostream>
#include <limits.h>

#include <cmath>

/** Print Primes upto n
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  int num;

  std::cout << "Enter upper limit for primes ? ";
  std::cin >> num;

  // if either 2 or 3, print simple, if > 3 use loop, else throw ERROR
  if (num == 2)
  {
    std::cout << "2";
  }
  else if (num == 3)
  {
    std::cout << "2 3";
  }
  else if (num >= 3)
  {
    std::cout << "2 3 ";

    // FIND PRIMES
    for (int j = 2; j <= num; j++)
    {
      for (int f = 2; f * f <= j; f++)
      {
        if (j % f == 0)
        {
          break;
        }
        else if (f + 1 > sqrt(j))
        {
          std::cout << j << " ";
        }
      }
    }

    std::cout << std::endl;
  }
  else
  {
    std::cout << "Please choose a higher range!" << std::endl;
  }

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}
