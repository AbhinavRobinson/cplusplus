#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

using namespace std;

/** Case 1:  W < Y , X > Z
 * @param arr list of pairs
 * @returns list of pairs
*/
auto getCase1List(vector<vector<int>> arr)
{
  vector<vector<vector<int>>> array;
  int num_pairs = arr.size();
  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    // local state
    hasPairs = false;
    vector<int> curr_pair = arr[i];

    // list of all curr pairs
    vector<vector<int>> pairs;

    for (int j = 0; j < num_pairs; j++)
    {
      if (curr_pair[0] < arr[j][0] && curr_pair[1] > arr[j][1])
      {
        hasPairs = true;
        pairs.push_back(curr_pair);
      }
    }

    if (hasPairs == true)
    {
      array.push_back(pairs);
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
  vector<vector<vector<int>>> array;
  int num_pairs = arr.size();
  bool hasPairs = false;

  for (int i = 0; i < num_pairs; i++)
  {
    // local state
    hasPairs = false;
    vector<int> curr_pair = arr[i];

    // list of all curr pairs
    vector<vector<int>> pairs;

    for (int j = 0; j < num_pairs; j++)
    {
      if (curr_pair[0] > arr[j][0] && curr_pair[1] < arr[j][1])
      {
        hasPairs = true;
        pairs.push_back(curr_pair);
      }
    }

    if (hasPairs == true)
    {
      array.push_back(pairs);
    }

    // clear memory
    curr_pair.clear();
    pairs.clear();
  }

  return array;
}

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
  vector<vector<vector<int>>> l1 = getCase1List(arr);
  // lets generate a list for case 2
  vector<vector<vector<int>>> l2 = getCase2List(arr);

  // Print contents of case 1
  cout << "Case 1 size=" << l1.size() << " : ";
  for (vector<vector<vector<int>>>::const_iterator i = l1.begin(); i != l1.end(); ++i)
  {
    for (vector<vector<int>>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      cout << "(";
      for (vector<int>::const_iterator k = j->begin(); k != j->end(); ++k)
      {
        cout << *k << ',';
      }
      cout << ")"
           << " ";
    }
  }
  cout << endl;

  // Print contents of case 2
  cout << "Case 2 size=" << l2.size() << " : ";
  for (vector<vector<vector<int>>>::const_iterator i = l2.begin(); i != l2.end(); ++i)
  {
    for (vector<vector<int>>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      cout << "(";
      for (vector<int>::const_iterator k = j->begin(); k != j->end(); ++k)
      {
        cout << *k << ',';
      }
      cout << ")"
           << " ";
    }
  }
  cout << endl;

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