#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

/**
 * @brief Generates Identity Matrix on nxm size
 * 
 * @param rows 
 * @param cols 
 * @return std::vector<std::vector<int>> 
 */
std::vector<std::vector<int>> generateIdentityMatrix(int rows, int cols)
{
  std::vector<std::vector<int>> matrix;

  for (int i = 0; i < rows; i++)
  {
    matrix.push_back({});
    for (int j = 0; j < cols; j++)
    {
      matrix[i].push_back(1);
    }
  }

  return matrix;
}

/**
 * @brief Prints matrix
 * 
 * @param matrix 
 */
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
  std::cout << "Enter rows of matrix (>1) : ";
  int rows, cols;
  std::cin >> rows;
  std::cout << "Enter cols of matrix (>1) : ";
  std::cin >> cols;

  // generate matrix
  std::vector<std::vector<int>> matrix = generateIdentityMatrix(rows, cols);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      // outer or inner
      (i == rows - 1 || i == 0 || j == cols - 1 || j == 0) ? matrix[i][j] += i + 1 : matrix[i][j] -= j;
    }
  }

  // encrypt matrix
  std::cout << "Encrypted" << std::endl;
  print2DMatrix(matrix);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  matrix.clear();

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}