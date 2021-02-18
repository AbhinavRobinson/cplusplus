#include <vector>
#include <iostream>
#include <math.h>
#include <limits.h>
#include <stdexcept>
#include <tuple>
#include <variant>

class overloader
{
public:
  void compare(int type)
  {
    // int
    if (type == 0)
    {
      int a, b;
      std::cout << "Enter A:";
      std::cin >> a;
      std::cout << "Enter B:";
      std::cin >> b;
      std::cout << compare(a, b);
      return;
    }
    // char
    if (type == 1)
    {
      char a, b;
      std::cout << "Enter A:";
      std::cin >> a;
      std::cout << "Enter B:";
      std::cin >> b;
      std::cout << compare(a, b);
      return;
    }
    // string
    if (type == 2)
    {
      std::string a, b;
      std::cout << "Enter A:";
      std::cin >> a;
      std::cout << "Enter B:";
      std::cin >> b;
      std::cout << compare(a, b);
      return;
    }
    // invalid type
    throw std::invalid_argument("Invalid type!");
  }

  int compare(int a, int b)
  {
    if (a > b)
      return 1;
    if (b > a)
      return -1;
    return 0;
  }

  int compare(char a, char b)
  {
    if (a > b)
      return 1;
    if (b > a)
      return -1;
    return 0;
  }

  int compare(std::string a, std::string b)
  {
    if (a > b)
      return 1;
    if (b > a)
      return -1;
    return 0;
  }
};

/**
 * @brief Have a overloaded compare function
 * 
 * take args 0,1,2 -> int, char, string
 * 
 * take 2 args, N1, N2, values to be compared
 * 
 * if N1 > N2 => 1
 * if N2 > N1 => -1
 * else 0
 * 
 * @return int 
 */
int main()
{
  int type;

  std::cout << "Enter type of variable (0,1,2) => (int, chr, str): ";
  std::cin >> type;

  overloader comparer;

  comparer.compare(type);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  type = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}