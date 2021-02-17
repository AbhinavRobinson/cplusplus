#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

void go_left(int i, int j)
{
  return;
}

void go_right(int i, int j)
{
  return;
}

void go_up(int i, int j)
{
  return;
}

void go_down(int i, int j)
{
  return;
}

/**
 * @brief Print 2d matrix in spiral form
 * @author Abhinav Robinson 
 * @return int 
 */
int main()
{
  std::cout << "Sample Matrix : " << std::endl;

  // sample matrix
  std::vector<std::vector<int>> matrix = {{1, 2, 3, 4},
                                          {5, 6, 7, 8},
                                          {9, 10, 11, 12},
                                          {13, 14, 15, 16}};

  // print matrix
  for (auto i : matrix)
  {
    std::cout << "[";
    for (auto j : i)
    {
      std::cout << j << ",";
    }
    std::cout << "]\n";
  }
  std::cout << std::endl;

  // lets convert to a spiral array
  std::vector<int> spiral;
  // positions
  int i = 0, j = 0;
  // direction (left,right,top,bottom)
  bool left = false, right = true, up = false, down = false;
  // boundaries
  int i_limit = matrix[0].size(), j_limit = matrix.size();

  int elem = matrix[0].size() * matrix.size();

  while (elem > 0)
  {
    // hit right edge
    if (i == (matrix[0].size() - 1) && right)
    {
      right = false;
      down = true;
    }

    // hit bottom edge
    if (j == (matrix.size() - 1) && down)
    {
      down = false;
      left = true;
    }

    // hit right edge
    if (i == 0 && left)
    {
      left = false;
      up = true;
    }

    // hit top edge
    if (j == 0 && up)
    {
      down = false;
      left = true;
    }

    // update i,j
    if (left)
      go_left(i, j);
    if (right)
      go_right(i, j);
    if (up)
      go_up(i, j);
    if (down)
      go_down(i, j);

    elem--;
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  matrix.clear();
  spiral.clear();

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  // End of Main
  return 0;
}