#include <iostream>
#include <vector>

int main()
{
  // define
  int rows, cols;
  std::string zig;
  std::cin >> rows;
  std::cin >> cols;
  std::cin >> zig;
  std::vector<std::vector<int>> matrix;

  // get input
  for (int row = 0; row < rows; row++)
  {
    std::vector<int> temp;
    for (int col = 0; col < cols; col++)
    {
      int t;
      std::cin >> t;
      temp.push_back(t);
    }
    matrix.push_back(temp);
  }

  // print
  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
      std::cout << matrix[row][col] << " ";
    std::cout << std::endl;
  }

  // if ZIG, print
  if ((zig.compare("z")) == 0)
  {
    std::cout << "Z Traversal" << std::endl;
    int col;
    int row;
    for (col = 0; col < cols; col++)
      std::cout << matrix[0][col] << " ";
    col = cols - 2;
    for (row = 1; row < rows; row++)
    {
      std::cout << matrix[row][col] << " ";
      col -= 1;
      if (col < 0)
        break;
    }
    for (int k = col + 2; k < cols; k++)
      std::cout << matrix[row][k] << " ";
  }
  else if ((zig.compare("zig")) == 0)
  {
    std::cout << "ZigZag Traversal" << std::endl;
    int row;
    for (row = 0; row < rows; row++)
    {
      int col;
      if (row % 2 == 0)
        for (col = 0; col < cols; col++)
          std::cout << matrix[row][col] << " ";
      else
        for (col = cols - 1; col > -1; col--)
          std::cout << matrix[row][col] << " ";
    }
  }
  else
    std::cout << "Invalid choice";
  std::cout << std::endl;
  return 0;
}
