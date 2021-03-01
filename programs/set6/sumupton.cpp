#include <iostream>

int main()
{
  std::cout << "Enter Number: ";
  int number;
  std::cin >> number;

  // lets just sum everything down to 1

  int sum = 0;
  while (number > 0)
  {
    sum += number;
    number--;
  }

  std::cout << "Sum is " << sum << std::endl;

  // basic memory cleanup
  sum = 0;
  number = 0;

  // program exits
  return 0;
}