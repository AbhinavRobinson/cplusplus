#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

using namespace std;

void genPowerset(int n)
{
  vector<int> stack;
  int k;
  stack.push_back(0); /* 0 is not considered as part of the set */
  k = 0;
  vector<vector<int>> powerset;
  while (1)
  {
    if (stack[k] < n)
    {
      stack.push_back(stack[k] + 1);
      k++;
    }
    else
    {
      stack[k - 1]++;
      k--;
    }
    if (k == 0)
      break;
    powerset.push_back(stack);
  }
  return;
}

/**
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  int n;

  cout << "Enter the number of records :";
  cin >> n;

  return 0;
}