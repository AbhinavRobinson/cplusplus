#include <iostream>
#include <stdexcept>
#include <vector>

// ---------- IO OPERATIONS ------------

/**
 * @brief Take an array of inputs and push to pointer
 *
 * @param arrayptr
 */
void read_array(std::vector<int> *arrayptr)
{
  int input;
  while (std::cin >> input && input != -1)
    arrayptr->push_back(input);
  if (arrayptr->size() <= 1) throw std::invalid_argument("user provided empty array!");
  input = 0;
  return;
}

/**
 * @brief Take a array pointer and print values
 *
 * @param arrayptr
 */
void print_array(std::vector<int> *arrayptr)
{
  for (auto i : *arrayptr)
    std::cout << i << ' ';
  std::cout << "\n";
  return;
}

// ------------- SORT ALGO -------------

/**
 * @brief Swap a and b
 *
 * @param a
 * @param b
 */
void __swap(int *a, int *b)
{
  int _temp = *a;
  *a = *b;
  *b = _temp;
  _temp = 0;
}

/**
 * @brief Return the midpoint of array and Swap internally
 *
 * @param arrayptr
 * @param low
 * @param high
 * @return int
 */
int __make_partition(std::vector<int> *arrayptr, int low, int high)
{
  int _pivot = arrayptr->at(high);
  int _iter = (low - 1);
  for (int _inner_iter = low; _inner_iter <= high - 1; _inner_iter++)
  {
    if (arrayptr->at(_inner_iter) <= _pivot)
    {
      _iter++;
      __swap(&arrayptr->at(_iter), &arrayptr->at(_inner_iter));
    }
  }
  __swap(&arrayptr->at(_iter + 1), &arrayptr->at(high));
  _pivot = 0;
  return (_iter + 1);
}

/**
 * @brief Quick Sort array
 *
 * @param arrayptr
 * @param low
 * @param high
 */
void __qsort_array(std::vector<int> *arrayptr, int low, int high)
{
  if (low < high)
  {
    int _partition = __make_partition(arrayptr, low, high);
    __qsort_array(arrayptr, low, _partition - 1);
    __qsort_array(arrayptr, _partition + 1, high);
    _partition = 0;
  }
  low = 0;
  high = 0;
  return;
}

/**
 * @brief Sort array using quick sort
 *
 * @param arrayptr
 */
void sort_array(std::vector<int> *arrayptr)
{
  std::cout << "Sorting array ..." << std::endl;
  __qsort_array(arrayptr, 0, (arrayptr->size() - 1));
  std::cout << "Sorted array 😎" << std::endl;
  return;
}

// ---------- SEARCH ALGO ------------

/**
 * @brief Binary search in array
 *
 * @param arrayptr
 * @param low
 * @param high
 * @param number
 * @return int
 */
int __binary_search(std::vector<int> *arrayptr, int low, int high, int number)
{
  if (low <= high)
  {
    int _mid = (low + high) / 2, _current = arrayptr->at(_mid);
    if (_current == number) return _mid;
    if (_current > number) return __binary_search(arrayptr, low, _mid - 1, number);
    if (_current < number) return __binary_search(arrayptr, _mid + 1, high, number);
  }
  return -1;
}

/**
 * @brief Search of x in array
 *
 * @param arrayptr
 * @param x
 */
void search_for_x(std::vector<int> *arrayptr, int x)
{
  int index = __binary_search(arrayptr, 0, arrayptr->size() - 1, x);
  if (index == -1) throw std::invalid_argument("Number not found!");
  std::cout << "Number found @ " << index + 1 << std::endl;
  // clean memory
  index = 0;
  return;
}

// --------------- MAIN ----------------
/**
 * @brief Sort the array and find elem using binary search
 *
 * @return int
 */
int main()
{
  // Get array
  std::cout << "Enter the Array (end with -1) :";
  std::vector<int> array;
  read_array(&array);
  sort_array(&array);
  print_array(&array);

  // Get number to search
  std::cout << "Enter the number to find :";
  int findme;
  std::cin >> findme;
  search_for_x(&array, findme);

  // ---------- end of function -----------
  // clean memory
  findme = 0;
  array.clear();
  // return OK
  return 0;
}