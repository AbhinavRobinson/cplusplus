/** @summary
 * Represent any number as the product of primes (no unique) 
*/

#include <iostream>
#include <vector>

// used for exit function
#include <math.h>
#include <limits.h>

using namespace std;

/** Main Function
 * @author Abhinav Robinson
 * @returns void
*/
int main()
{
  int num;

  cout << "Enter a number : ";
  cin >> num;

  
  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  // End of Main
  return 0;
}