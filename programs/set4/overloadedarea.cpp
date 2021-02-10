#include <limits.h>
#include <math.h>

#include <vector>
#include <iostream>

using namespace std;

int main()
{
  unsigned short int sides;

  // Lets get shape and dimensions
  cout << "Enter number of sides : ";
  cin >> sides;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}