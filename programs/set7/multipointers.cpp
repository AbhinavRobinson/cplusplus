#include <iostream>
#include <stdexcept>
#include <vector>

int main()
{
  // ----------------------------------------------------------------------
  // get arrays

  int input;

  std::cout << "Enter W Array (enter -1 to end) : ";
  std::vector<int> *w_arr = new std::vector<int>;
  while ((std::cin >> input) && input != -1)
    w_arr->push_back(input);

  // sanity check
  if (w_arr->size() < 1) throw std::invalid_argument("No items in W array");

  std::cout << "Enter M Array (enter -1 to end) : ";
  std::vector<int> *m_arr = new std::vector<int>;
  while ((std::cin >> input) && input != -1)
    m_arr->push_back(input);

  // sanity check
  if (m_arr->size() < 1) throw std::invalid_argument("No items in M array");

  // every m must have a associated w
  if (m_arr->size() != w_arr->size()) throw std::invalid_argument("M and W arrays of unequal lengths");

  std::cout << "Enter S Array (enter -1 to end) : ";
  std::vector<int> *s_arr = new std::vector<int>;
  while ((std::cin >> input) && input != -1)
    s_arr->push_back(input);

  // sanity check
  if (s_arr->size() < 1) throw std::invalid_argument("No items in S array");

  // done taking arrays
  // ----------------------------------------------------------------------
  // get score (main logic)

  int score = 0;
  int curr_m = -1, curr_w = -1, curr_s = -1, max_possible_m = -1;
  for (int s_iter = 0; s_iter < s_arr->size(); s_iter++)
  {
    curr_s = s_arr->at(s_iter);
    for (int wam_iter = 0; wam_iter < m_arr->size(); wam_iter++)
    {
      curr_w = w_arr->at(wam_iter);
      if (curr_w <= curr_s) max_possible_m = m_arr->at(wam_iter);
      if (curr_w > curr_s) break;
    }
    if (max_possible_m != -1) score += max_possible_m;
  }

  // print score
  std::cout << "Max Score is " << score << std::endl;
  return 0;
}