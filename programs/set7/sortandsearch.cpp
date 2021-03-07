#include <iostream>
#include <stdexcept>
#include <vector>

void read_array(std::vector<int> *arrayptr)
{
  int input;
  while (std::cin >> input && input != -1)
    arrayptr->push_back(input);
  if (arrayptr->size() <= 1) throw std::invalid_argument("user provided empty array!");
  return;
}

int main()
{
  std::cout << "Enter the Array (end with -1) :";
  std::vector<int> arrayptr;
  read_array(&arrayptr);
  return 0;
}