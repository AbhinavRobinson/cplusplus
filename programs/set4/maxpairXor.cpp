#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

using namespace std;

int main()
{
  vector<int> A = {1, 2};
  vector<int> B = {3, 4};

  // lets generate a pairs sums AxB
  vector<int> C;

  for (vector<int>::const_iterator i = A.begin(); i != A.end(); ++i)
  {
    for (vector<int>::const_iterator j = B.begin(); j != B.end(); ++j)
    {
      C.push_back(*i + *j);
    }
  }

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

  int max = -1;
  for (vector<int>::const_iterator x = XOR.begin(); x != XOR.end(); ++x)
  {
    max = (*x > max) ? *x : max;
  }

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

  return 0;
}