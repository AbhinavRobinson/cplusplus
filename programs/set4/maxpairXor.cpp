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

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  A.clear();
  B.clear();
  C.clear();

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}