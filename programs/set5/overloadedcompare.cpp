#include <vector>
#include <iostream>
#include <math.h>
#include <limits.h>
#include <stdexcept>
#include <tuple>
#include <variant>

using variable_type = std::variant<int, char, std::string>;

std::tuple<variable_type, variable_type> itemGetter(int type)
{
  // int
  if (type == 0)
  {
    int a, b;
    return std::make_tuple(a, b);
  }
  // char
  if (type == 1)
  {
    char a, b;
    return std::make_tuple(a, b);
  }
  // string
  if (type == 2)
  {
    std::string a, b;
    return std::make_tuple(a, b);
  }
  // invalid type
  throw std::invalid_argument("Invalid type!");
}

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

  auto [a, b] = itemGetter(type);

  std::cout << "Enter variable A : ";
  std::cin >> a;

  std::cout << "Enter variable B : ";
  std::cin >> b;

  // std::cout << &a << &b << std::endl;

  return 0;
}