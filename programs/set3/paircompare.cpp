#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

using namespace std;

/**
 * Compare pairs (w,x), (y,z) on given conditions :
 * 
 *  W < Y , X > Z  =>  (total pairs) : (list of pair of pairs) => 1 : ((1,4),(3,2))              
 *  and                                                                                                     
 *  W > Y , X < Z  =>  (total pairs) : (list of pair of pairs) => 1 : ((13,12),(11,14))                     
 *                                                                                                          
 *  if no such pair  =>  Not Found                                                                          
 *                                                                                                          
 *  given (in line 1) Array of pairs.                                                                       
 * 
 */

bool l1HasNoPairs = true;
bool l2HasNoPairs = true;

/** Case 1:  W < Y , X > Z
 * @param arr list of pairs
 * @returns list of pairs
*/
auto getCase1List(vector<vector<int>> arr)
{
  // make local 3d array
  vector<vector<vector<int>>> array;
  // size of input
  int num_pairs = arr.size();
  // if we wont have any pair, we wont push to array
  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    // reset hasPair check
    hasPairs = false;
    // create local pairs
    vector<int> curr_pair = arr[i];

    // list of all curr pairs
    vector<vector<int>> pairs;

    for (int j = 0; j < num_pairs; j++)
    {
      if (curr_pair[0] < arr[j][0] && curr_pair[1] > arr[j][1])
      {
        // since pairs are found, lets push to local pairs
        hasPairs = true;
        pairs.push_back(curr_pair);
      }
    }

    if (hasPairs == true)
    {
      // since we did find pairs, we will push local pair list to array
      array.push_back(pairs);
      l1HasNoPairs = false;
    }

    // clear memory
    curr_pair.clear();
    pairs.clear();
  }

  return array;
}

/** Case 2: W > Y , X < Z
 * @param arr list of pairs
 * @returns list of pairs
*/
auto getCase2List(vector<vector<int>> arr)
{
  // make local 3d array
  vector<vector<vector<int>>> array;
  // size of input
  int num_pairs = arr.size();
  // if we wont have any pair, we wont push to array
  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    // reset hasPair check
    hasPairs = false;
    // create local pairs
    vector<int> curr_pair = arr[i];

    // list of all curr pairs
    vector<vector<int>> pairs;

    for (int j = 0; j < num_pairs; j++)
    {
      if (curr_pair[0] > arr[j][0] && curr_pair[1] < arr[j][1])
      {
        // since pairs are found, lets push to local pairs
        hasPairs = true;
        pairs.push_back(curr_pair);
      }
    }

    if (hasPairs == true)
    {
      // since we did find pairs, we will push local pair list to array
      array.push_back(pairs);
      l2HasNoPairs = false;
    }

    // clear memory
    curr_pair.clear();
    pairs.clear();
  }

  return array;
}

/** Prints a 3D vector containing N-length pairs
 * @author Abhinav Robinson
 * @returns void
*/
void print3DVectorWithCurlies(vector<vector<vector<int>>> vec)
{
  for (vector<vector<vector<int>>>::const_iterator i = vec.begin(); i != vec.end(); ++i)
  {
    for (vector<vector<int>>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      cout << "{";
      for (vector<int>::const_iterator k = j->begin(); k != j->end(); ++k)
      {
        cout << *k << ',';
      }
      cout << "}"
           << " ";
    }
  }
}

/** Main Function
 * @author Abhinav Robinson
 * @return {unsigned int} 0
*/
int main()
{
  // Create example array
  vector<vector<int>> arr = {{1, 4}, {3, 2}, {5, 6}, {7, 8}, {9, 10}, {13, 12}, {11, 14}};

  bool l1HasPairs;
  bool l2HasPairs;

  // lets generate a list for case 1
  vector<vector<vector<int>>> l1 = getCase1List(arr);
  // lets generate a list for case 2
  vector<vector<vector<int>>> l2 = getCase2List(arr);

  // Print contents of case 1
  if (!l1HasNoPairs)
  {
    cout << "Case 1 size=" << l1.size() << " : ";
    print3DVectorWithCurlies(l1);
    cout << endl;
  }
  else
  {
    cout << "Case 1 Not found" << endl;
  }

  // Print contents of case 2
  if (!l2HasNoPairs)
  {
    cout << "Case 2 size=" << l2.size() << " : ";
    print3DVectorWithCurlies(l2);
    cout << endl;
  }
  else
  {
    cout << "Case 2 Not found" << endl;
  }

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  arr.clear();
  l1.clear();
  l2.clear();

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  return 0;
}