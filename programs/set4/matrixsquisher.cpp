/** Given a 2D matrix, which is symmetric along it's diagonal;
 * Compress the matrix into a 1D matrix of either upper Triangle, or lower Triangle (choose at runtime: 0,1)  
 */

#include <math.h>
#include <limits.h>

#include <vector>
#include <iostream>

// *** End Of Imports ***

using namespace std;

/**
 * @function Main 
* @returns 0 { int }
 * @author Abhinav Robinson
*/
int main()
{
  // get choice
  int choice;
  cout << "Enter Choice (0,1)=>{upper, lower} : ";
  cin >> choice;

  // init orig matrix
  vector<vector<int>> M2D;

  M2D = {{11, 2, 3, 4, 5, 6},
         {2, 22, 7, 8, 10, 11},
         {3, 7, 33, 9, 12, 13},
         {4, 8, 9, 44, 14, 15},
         {5, 10, 12, 14, 55, 16},
         {6, 11, 13, 15, 16, 66}};

  // print orig matrix
  cout << "Original matrix" << endl;
  cout << "{\n";
  for (auto i : M2D)
  {
    cout << "{";
    for (auto j : i)
      cout << j << ",";
    cout << "}\n";
  }
  cout << "}";

  // init squished matrix
  vector<int> compresssed;
  if (choice == 1)
  {
    // lower
    for (int i = 0; i < M2D.size(); i++)
    {
      for (int j = 0; j <= i; j++)
      {
        compresssed.push_back(M2D[i][j]);
      }
    }
  }
  else
  {
    // upper
    for (int i = 0; i < M2D.size(); i++)
    {
      for (int j = i; j < M2D.size(); j++)
      {
        compresssed.push_back(M2D[i][j]);
      }
    }
  }

  // print result
  cout << "\n\n";
  cout << "Compressed Matrix : ";
  cout << "{";
  for (auto i : compresssed)
    cout << i << ",";
  cout << "}" << endl;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  compresssed.clear();
  M2D.clear();
  choice = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  // End of Main
  return 0;
}