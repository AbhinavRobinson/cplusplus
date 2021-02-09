#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>
#include <set>

using namespace std;

/** Generate Powerset using stack method
 * @param n { int } total size
 * @returns powerset { vector<set<int>> } 
*/
auto genPowerset(int n)
{
  // init stack and powerVec
  vector<int> stack;
  vector<vector<int>> powerVec;

  // pushback first 0, this will not be included in final set
  stack.push_back(0);
  int k = 0;

  // generate powerset (with duplicates // fast)
  while (1)
  {
    if (stack[k] < n)
    {
      stack.push_back(stack[k] + 1);
      k++;
    }
    else
    {
      stack[k - 1] = stack[k - 1] + 1;
      k--;
    }
    if (k == 0)
      break;
    powerVec.push_back(stack);
  }

  // init powerset
  vector<set<int>> powerset;

  // remove duplicates and zeros
  for (vector<vector<int>>::const_iterator i = powerVec.begin(); i != powerVec.end(); ++i)
  {
    set<int> s;

    for (vector<int>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      // avoid adding zeros
      if (*j == 0)
      {
        continue;
      }
      s.insert(*j);
    }

    powerset.push_back(s);
  }

  // cleanup memory
  stack.clear();
  powerVec.clear();
  k = 0;
  n = 0;

  // return unique valued powerset
  return powerset;
}

/** Print 2D vector of Powerset
 *  @returns void
*/
void print2DVectorWithCurlies(vector<set<int>> vec)
{
  for (vector<set<int>>::const_iterator i = vec.begin(); i != vec.end(); ++i)
  {
    cout << "{";
    for (set<int>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      cout << "r" << *j << ',';
    }
    cout << "}"
         << " ";
  }
  cout << endl;

  // cleanup memory
  vec.clear();
}

/**
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  int n;

  // get total records
  cout << "Enter the number of records :";
  cin >> n;

  // call function to pipe powerset into printer
  print2DVectorWithCurlies(genPowerset(n));

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  // we already cleaned rest of the memory
  n = 0;

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  return 0;
}