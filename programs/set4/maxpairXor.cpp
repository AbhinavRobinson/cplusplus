/** @summary
 * Find the dot product of 2 arrays, and then find the pairwise Xor of the Product.
*/

#include <iostream>
#include <vector>

// used for exit function
#include <math.h>
#include <limits.h>
// *** End of Imports ***

using namespace std;

/** Main Function
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  // Define 2 basic arrays
  vector<int> A = {1, 2};
  vector<int> B = {3, 4};

  // lets generate a pairs sums AxB
  vector<int> C;

  // Make C array AxB
  for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
  {
    for (vector<int>::const_iterator j = B.begin(); j != B.end(); ++j)
    {
      C.push_back(*i + *j);
    }
  }

  // Print Cross Product
  cout << "C = {";
  for (vector<int>::const_iterator psum = C.begin(); psum != C.end(); ++psum)
  {
    cout << *psum << ',';
  }
  cout << '}' << endl;

  // Lets find XOR of pairs
  vector<int> XOR;
  for (vector<int>::const_iterator i = C.begin(); i != C.end(); ++i)
  {
    for (vector<int>::const_iterator j = C.begin(); j != C.end(); ++j)
    {
      // append a (xor) b
      XOR.push_back(*i ^ *j);
    }
  }

  // find max
  int max = -1;
  for (vector<int>::const_iterator x = XOR.begin(); x != XOR.end(); ++x)
  {
    max = (*x > max) ? *x : max;
  }

  // print max
  cout << "Max of Pair XOR : " << max << endl;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  A.clear();
  B.clear();
  C.clear();
  XOR.clear();
  max = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  // End of main function
  return 0;
}