#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

std::vector<std::vector<int>> generateIdentityMatrix(int size)
{
  std::vector<std::vector<int>> matrix;

  for (int i = 0; i <= size; i++)
  {
    matrix.push_back({});
    for (int j = 0; j <= size; j++)
    {
      matrix[i].push_back(1);
    }
  }

  return matrix;
}

void print2DMatrix(std::vector<std::vector<int>> matrix)
{
  for (std::vector<std::vector<int>>::const_iterator i = matrix.begin(); i != matrix.end(); ++i)
  {
    std::cout << "[";
    for (std::vector<int>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      std::cout << *j << ",";
    }
    std::cout << "]\n";
  }
  std::cout << std::endl;
  return;
}

/**
 * @brief Apply matrix operations to encrypt.
 * 
 *  outer elems => += i+1
 *  inner elems => -= j
 * 
 * @author Abhinav Robinson
 * @return int 
 */
int main()
{
  std::cout << "Enter size of matrix (3+) : ";
  int choice;
  std::cin >> choice;

  print2DMatrix(generateIdentityMatrix(choice));

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