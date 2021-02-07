#include <iostream>
#include <limits.h>
#include <math.h>

/** Compare pairs (w,x), (y,z) on given conditions :
 * 
 *  W < Y , X > Z  =>  (total pairs) : (list of pair of pairs) => 1 : ((1,4),(3,2))              
 *  and                                                                                                     
 *  W > Y , X < Z  =>  (total pairs) : (list of pair of pairs) => 1 : ((13,12),(11,14))                     
 *                                                                                                          
 *  if no such pair  =>  Not Found                                                                          
 *                                                                                                          
 *  given (in line 1) Array of pairs.                                                                       
 * 
 * @author Abhinav Robinson
 * @return {unsigned int} 0
*/
int main()
{
  // Create example array
  int arr[][2] = {{1, 4}, {3, 2}, {5, 6}, {7, 8}, {9, 10}, {13, 12}, {11, 14}};

  // lets generate a list for case 1
  int **l1 = getCase1List(arr);
  int **l2 = getCase2List(arr);

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

/** Case 1:  W < Y , X > Z
 * @param arr list of pairs
 * @returns list of pairs
*/
int **getCase1List(int arr[][2])
{
  int **array = 0;
  int num_pairs = sizeof(arr);

  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    int *curr_pair = arr[i];
    int **pairs = 0;
    for (int j = 0; j < num_pairs; j++)
    {
    }
  }

  return array;
}

/** Case 2: W > Y , X < Z
 * @param arr list of pairs
 * @returns list of pairs
*/
int **getCase2List(int arr[][2])
{
  int **array = 0;

  return array;
}