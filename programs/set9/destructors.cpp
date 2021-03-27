#include <iostream>
using namespace std;

class ProblemSolution
{
  public:
  ProblemSolution() {}
  ~ProblemSolution() { cout << "Destructor called" << endl; }
};

int main()
{
  ProblemSolution problemSolution;
  return 0;
}