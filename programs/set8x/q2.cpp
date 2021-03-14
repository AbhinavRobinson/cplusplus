#include <iostream>
#include <vector>

int main()
{
  // define
  int length;
  int hs;
  std::cin >> length;
  std::vector<int> matrix(length);

  // get input
  for (auto i = matrix.begin(); i != matrix.end(); ++i)
    std::cin >> *i;
  std::cin >> hs;

  // scan
  int max = -1;
  for (auto i : matrix)
    if (max < i)
      max = i;

  // print
  if (max <= hs)
    std::cout << "Yes";
  else
    std::cout << "No";
  std::cout << std::endl;
  return 0;
}