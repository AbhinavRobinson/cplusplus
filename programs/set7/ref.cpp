#include <iomanip>
#include <iostream>
#include <vector>

// solution class
class ProblemSolution
{
  public:
  double *solution(int *A, int *B);
};

// define operation
double *ProblemSolution::solution(int *A, int *B)
{
  double *result = nullptr;
  result = new double((*A * 20.0) + (34.0 / *B));
  return result;
}

/**
 * @brief Play around with pointers and refs
 *
 * @return int
 */
int main()
{
  int A, B;
  std::cout << "Enter A :";
  std::cin >> A;
  std::cout << "Enter B :";
  std::cin >> B;

  auto ps = ProblemSolution();
  std::cout << std::setprecision(2) << std::fixed << *ps.solution(&A, &B) << std::endl;

  return 0;
}