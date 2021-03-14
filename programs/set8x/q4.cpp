#include <iostream>

int main()
{
  // define
  int rds, val = 10, amt = 100;
  std::string input;

  // get input
  std::cin >> rds;
  std::cin >> input;

  // check
  for (int i = 0; i < rds; i++)
  {
    int x = (input[i]) - '0';
    if (x == 1)
    {
      amt += val;
      val = 10;
    }
    else if (x == 0)
    {
      amt -= val;
      val *= 2;
    }
  }

  // print
  if (amt < 0)
    std::cout << -1 << std::endl;
  else
    std::cout << amt << std::endl;
  return 0;
}