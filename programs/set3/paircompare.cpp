#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

using namespace std;

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
  vector<vector<int>> arr = {{1, 4}, {3, 2}, {5, 6}, {7, 8}, {9, 10}, {13, 12}, {11, 14}};

  // lets generate a list for case 1
  vector<int> l1 = getCase1List(arr);
  vector<int> l2 = getCase2List(arr);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  return 0;
}

/** Case 1:  W < Y , X > Z
 * @param arr list of pairs
 * @returns list of pairs
*/
auto getCase1List(auto arr)
{
  vector<int> array;
  int num_pairs = sizeof(arr);
  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    hasPairs = false;
    vector<int> *curr_pair = arr[i];

    vector<int> pairs;

    for (int j = 0; j < num_pairs; j++)
    {
      if (curr_pair[0] < arr[j][0] && curr_pair[1] > arr[j][1])
      {
        hasPairs = true;
        // pairs.push_back()
      }
    }
  }

  return array;
}

/** Case 2: W > Y , X < Z
 * @param arr list of pairs
 * @returns list of pairs
*/
auto getCase2List(auto arr)
{
  vector<int> array;
  int num_pairs = sizeof(arr);
  bool hasPairs = false;

  return array;
}