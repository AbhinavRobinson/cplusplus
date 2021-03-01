#include <cmath>
#include <iostream>
#include <vector>

/**
 * @brief Returns bool if prime or not
 *
 * @param NUM
 * @return true
 * @return false
 */
bool isThisPrime(int NUM)
{
  for (int i = 2; i <= NUM / 2; i++)
    if (NUM % i == 0)
      return false;

  std::cout << "Not Possible" << std::endl;
  return true;
}

/**
 * @brief Get the Factor Array object
 *
 * @param NUM
 * @return std::vector<int>
 */
std::vector<int> getFactorArray(int NUM)
{
  std::vector<int> factorArray;

  // lets only look for single digit numbers
  for (int i = 9; i >= 2; i--)
  {
    if (NUM <= 1) break;

    if (NUM % i == 0)
    {
      factorArray.push_back(i);
      NUM = NUM / i;
      i++;
    }
  }

  // if we hit a prime, we wont be able to divide it,
  // so we add it directly
  if (NUM != 1) factorArray.insert(factorArray.begin(), NUM);

  return factorArray;
}

/**
 * @brief Express number N as the smallest number formed by it's factors
 *
 * @example 36 >> 49 as 4*9 = 36
 *
 * @return int
 */
int main()
{
  std::cout << "Enter Number: ";
  int NUMBER;
  std::cin >> NUMBER;

  // if prime, return "Not Possiable" and exit
  if (isThisPrime(NUMBER)) return 0;

  // find factors
  std::vector<int> factorArray = getFactorArray(NUMBER);

  int pos = 1;
  int result = 0;

  for (std::vector<int>::const_iterator i = factorArray.begin(); i != factorArray.end(); ++i)
  {
    result += pos * (*i);
    // if we hit a multidigit number, lets correctly append it.
    if (*i > 9) pos *= std::pow(10, (floor(log10(*i))));
    pos *= 10;
  }

  // print
  std::cout << "Lowest Factor Number is " << result << std::endl;

  // end program
  return 0;
}