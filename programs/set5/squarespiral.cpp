#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

/** O(i*j) [i:rows, j:cols]
 * @brief Print 2d matrix in spiral form
 * @author Abhinav Robinson 
 * @return int 
 */
int main()
{
  // let user choose matrix
  unsigned short int choice;

  std::cout << "Choose matrix (0 or 1) ? ";
  std::cin >> choice;

  std::cout << "Sample Matrix : " << std::endl;

  // options
  std::vector<std::vector<int>> a = {{1, 2, 3, 4},
                                     {5, 6, 7, 8},
                                     {9, 10, 11, 12},
                                     {13, 14, 15, 16}},
                                b = {{1, 2, 3, 4, 5, 6},
                                     {7, 8, 9, 10, 11, 12},
                                     {13, 14, 15, 16, 17, 18}};

  // get matrix
  std::vector<std::vector<int>> matrix = (choice == 0) ? a
                                                       : b;

  // clear memory
  a.clear();
  b.clear();

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
  int i_high = matrix[0].size(), j_high = matrix.size(), i_low = 0, j_low = 0;
  // count of elems left
  int elem = matrix[0].size() * matrix.size();

  // iter loop
  while (elem > 0)
  {
    // add elem
    spiral.push_back(matrix[j][i]);

    // hit right edge
    if (i == (i_high - 1) && right)
    {
      right = false;
      down = true;
      // top row is traversed
      j_low++;
    }

    // hit bottom edge
    if (j == (j_high - 1) && down)
    {
      down = false;
      left = true;
      // right column is traversed
      i_high--;
    }

    // hit right edge
    if (i == i_low && left)
    {
      left = false;
      up = true;
      // bottom row is traversed
      j_high--;
    }

    // hit top edge
    if (j == j_low && up)
    {
      up = false;
      right = true;
      // left column is traversed
      i_low++;
    }

    // update i,j
    if (left)
      i--;
    if (right)
      i++;
    if (up)
      j--;
    if (down)
      j++;

    // traversed 1 item
    elem--;
  }

  // print result
  std::cout << "Spiral = [";
  for (auto i : spiral)
  {
    std::cout << i << ",";
  }
  std::cout << "]\n";

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  matrix.clear();
  spiral.clear();
  i = 0;
  j = 0;
  i_low = 0;
  i_high = 0;
  j_low = 0;
  j_high = 0;
  elem = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  // End of Main
  return 0;
}