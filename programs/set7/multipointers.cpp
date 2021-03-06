#include <iostream>
#include <vector>

int main()
{
  // ---------------------------------------------
  // get arrays
  std::vector<int> *wArr;
  int input;
  std::cout << "Enter W Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    wArr->push_back(input);
  std::vector<int> *mArr;
  std::cout << "Enter M Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    mArr->push_back(input);
  std::vector<int> *sArr;
  std::cout << "Enter S Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    sArr->push_back(input);
  // done taking arrays
  // ---------------------------------------------

  
  return 0;
}