#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

/**
 * @brief Break down a list to it's smallest components.
 * 
 * @return int 
 */
int main()
{
  std::vector<std::vector<std::string>> stringList = {{}};

  std::cout << "Enter Strings (enter End or end to stop):" << std::endl;

  while (true)
  {
    std::string temp;
    std::cin >> temp;

    if (temp == "End" || temp == "end") break;

    stringList[0].push_back(temp);
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