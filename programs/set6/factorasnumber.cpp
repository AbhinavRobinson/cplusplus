#include <iostream>

/**
 * @brief Returns bool if prime or not
 *
 * @param num
 * @return true
 * @return false
 */
bool isThisPrime(int num)
{
  if (num == 0 || num == 1) return false;

  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0)
      return false;

  std::cout << "Not Possiable" << std::endl;
  return true;
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

  // end program
  return 0;
}