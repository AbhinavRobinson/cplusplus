#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

using namespace std;

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
  cout << "Sample Matrix : " << endl;

  // sample matrix
  vector<vector<int>> matrix = {{1, 2, 3, 4},
                                {5, 6, 7, 8},
                                {9, 10, 11, 12},
                                {13, 14, 15, 16}};

  // print matrix
  for (auto i : matrix)
  {
    cout << "[";
    for (auto j : i)
    {
      cout << j << ",";
    }
    cout << "]\n";
  }
  cout << endl;

  // lets convert to a spiral array
  vector<int> spiral;

  while (true)
  {
    // positions
    int i = 0, j = 0;
    // direction (left,right,top,bottom)
    bool left, right, up, down;

    // update i,j
    if (left)
      go_left(i, j);
    if (right)
      go_right(i, j);
    if (up)
      go_up(i, j);
    if (down)
      go_down(i, j);
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  matrix.clear();
  spiral.clear();

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << std::endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  // End of Main
  return 0;
}