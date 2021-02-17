#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

using namespace std;

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

  // for (int i = 0; i < matrix.size(); i++)
  // {

  // }

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