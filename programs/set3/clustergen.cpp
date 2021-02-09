#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>
#include <set>

using namespace std;

auto genPowerset(int n)
{
  vector<int> stack;
  int k;
  stack.push_back(0); /* 0 is not considered as part of the set */
  k = 0;
  vector<vector<int>> powerVec;
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

  vector<set<int>> powerset;

  for (vector<vector<int>>::const_iterator i = powerVec.begin(); i != powerVec.end(); ++i)
  {
    set<int> s;

    for (vector<int>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      if (*j == 0)
      {
        continue;
      }
      s.insert(*j);
    }

    powerset.push_back(s);
  }

  return powerset;
}

void print2DVectorWithCurlies(vector<set<int>> vec)
{
  for (vector<set<int>>::const_iterator i = vec.begin(); i != vec.end(); ++i)
  {
    cout << "{";
    for (set<int>::const_iterator j = i->begin(); j != i->end(); ++j)
    {
      cout << *j << ',';
    }
    cout << "}"
         << " ";
  }
  cout << endl;
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

  print2DVectorWithCurlies(genPowerset(n));

  return 0;
}