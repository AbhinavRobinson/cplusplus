#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

using namespace std;

int main()
{
  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << std::endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  // End of Main
  return 0;
}