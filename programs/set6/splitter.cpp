#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

/**
 * @brief Print Array
 * 
 * @param stringArray 
 * @param low 
 * @param high 
 */
void printArray(std::vector<std::string> &stringArray, int low, int high, std::string s)
{
  if (s == "Root")
  {
    std::cout << "Root : ";
  }
  else
  {
    std::cout << "Splitting " << s << " ";
  }
  std::cout << "[";
  for (int i = low; i <= high; i++)
  {
    std::cout << stringArray[i] << ", ";
  }
  std::cout << "]";
  std::cout << std::endl;
  return;
}

/**
 * @brief Split array into single items
 * 
 * @param stringArray 
 * @param low 
 * @param high 
 */
void splitter(std::vector<std::string> &stringArray, int low, int high)
{
  // as long as low < high
  if (low < high)
  {
    // find middle
    int middle = low + (high - low) / 2;
    // split
    printArray(stringArray, low, middle, "Left");
    splitter(stringArray, low, middle);
    printArray(stringArray, middle, high, "Right");
    splitter(stringArray, middle + 1, high);
  }
  else
  {
    // print root
    printArray(stringArray, low, high, "Root");
  }
}

/**
 * @brief Break down a list to it's smallest components.
 * 
 * @return int 
 */
int main()
{
  // init stringArray with [0] as {}
  std::vector<std::string> stringArray;
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
    stringArray.push_back(temp);
  }

  splitter(stringArray, 0, stringArray.size() - 1);

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