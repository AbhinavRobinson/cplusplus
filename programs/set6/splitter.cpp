#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

void splitter(std::vector<std::vector<std::string>> &stringArray)
{
  bool INCOMPLETE = false;
  for (auto i : stringArray)
  {
    if (i.size() > 1) !INCOMPLETE;
    if (INCOMPLETE) break;
  }

  return;
}

/**
 * @brief Break down a list to it's smallest components.
 * 
 * @return int 
 */
int main()
{
  // init stringArray with [0] as {}
  std::vector<std::vector<std::string>> stringArray = {{}};
  // prompt user
  std::cout << "Enter Strings (enter End or end to stop):" << std::endl;

  // loop for input
  while (true)
  {
    // get input into temp string
    std::string temp;
    std::cin >> temp;
    // guard for end
    if (temp == "End" || temp == "end") break;
    // push to array
    stringArray[0].push_back(temp);
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