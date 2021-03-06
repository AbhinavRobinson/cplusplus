#include <iostream>
#include <stdexcept>
#include <vector>

int main()
{
  // ---------------------------------------------
  // get arrays
  int input;
  std::vector<int> *wArr;
  std::cout << "Enter W Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    wArr->push_back(input);
  // sanity check
  if (wArr->size() < 1) throw std::invalid_argument("No items in W array");
  std::vector<int> *mArr;
  std::cout << "Enter M Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    mArr->push_back(input);
  // sanity check
  if (mArr->size() < 1) throw std::invalid_argument("No items in M array");
  std::vector<int> *sArr;
  std::cout << "Enter S Array (enter -1 to end) : ";
  while ((std::cin >> input) && input != -1)
    sArr->push_back(input);
  // sanity check
  if (sArr->size() < 1) throw std::invalid_argument("No items in S array");
  // done taking arrays
  // ---------------------------------------------
  // get score (main logic)
  int score = 0;
  if (mArr->size() != wArr->size()) throw std::invalid_argument("M and W arrays of unequal lengths");
  return 0;
}