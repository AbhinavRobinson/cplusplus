#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

/**
 * @brief Min swaps required to sort an array
 *
 * @return int
 */
int main()
{
  int size;

  std::cout << "Enter size of array : ";
  std::cin >> size;

  std::vector<int> unsortedArray;

  for (int i = 0; i < size; i++)
  {
    int temp;
    std::cin >> temp;
    unsortedArray.push_back(temp);
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}