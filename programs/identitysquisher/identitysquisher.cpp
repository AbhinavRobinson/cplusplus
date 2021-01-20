#include <iostream>
#include <limits.h>

#include <numeric>

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

  // init row and col strings
  std::string row = "";
  std::string col = "";

  printf("Enter Row Operation (xxx) < [0,1] ? ");
  std::cin >> row;

  printf("Enter Col Operation (xxx) < [0,1] ? ");
  std::cin >> col;

  // Init row and col matricies
  int *rowArr = new int[sizeof(row)];
  int *colArr = new int[sizeof(col)];

  // Ingest Row inputs
  for (int i = 0; i < row.length(); i++)
  {
    rowArr[i] = row[i];
  }

  // Ingest Col inputs
  for (int i = 0; i < col.length(); i++)
  {
    colArr[i] = col[i];
  }

  // final count of rows and cols
  int rowCount = std::accumulate(rowArr, rowArr + size, rowCount);
  int colCount = std::accumulate(colArr, colArr + size, colCount);

  int **result = new int *[colCount];

  for (int i = 0; i < colCount; i++)
  {
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");
  for (int h = 0; h < size; h++)
  {
    delete[] array[h];
  }
  delete[] rowArr;
  delete[] colArr;
  delete[] array;
  array = 0;
  rowArr = 0;
  colArr = 0;
  col = "";
  row = "";

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}