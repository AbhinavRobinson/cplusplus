#include <iostream>
#include <limits.h>

/** Generates Identity Matrix
 * @param {unsigned} size 
 * @returns {int**} identity array
*/
int **createIdentity(unsigned size)
{
  // initialize 2d array
  int **array = 0;

  // generate i-rows
  array = new int *[size];

  // iterate rows
  for (int h = 0; h < size; h++)
  {
    // generate j-columns
    array[h] = new int[size];

    // iterate columns
    for (int w = 0; w < size; w++)
    {
      // if diagonal > set 1 : else 0
      if (h == w)
      {
        array[h][w] = 1;
      }
      else
      {
        array[h][w] = 0;
      }
    }
  }

  // return array
  return array;
}

/** Identity Squisher
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  unsigned size = 0;

  // get size
  printf("Enter size of array: ");
  std::cin >> size;

  // get identity matrix
  int **array = createIdentity(size);

  // print contents of the array2D
  printf("Array contents: \n");
  for (int h = 0; h < size; h++)
  {
    for (int w = 0; w < size; w++)
    {
      printf("%i ", array[h][w]);
    }
    printf("\n");
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");
  for (int h = 0; h < size; h++)
  {
    delete[] array[h];
  }
  delete[] array;
  array = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}