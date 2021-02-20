#include <iostream>
#include <limits.h>
#include <math.h>
#include <random>
#include <vector>

/**
 * @brief Sort a list of random intgers in ascending order.
 * 
 * @return int 
 */
int main()
{
  std::random_device rd;
  std::mt19937 rng(rd());
  std::uniform_int_distribution<int> unif(1, 100);

  std::vector<int> rand_list;

  for (int i = 0; i < 10; i++)
  {
    rand_list.push_back(unif(rng));
  }

  std::cout << "Generated list : [";
  for (auto i : rand_list)
    std::cout << i << " ";
  std::cout << "]\n";

  return 0;
}