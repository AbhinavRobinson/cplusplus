#include <iostream>
#include <stdexcept>
#include <vector>

// ---------- IO OPERATIONS ------------

void read_array(std::vector<int> *arrayptr)
{
  int input;
  while (std::cin >> input && input != -1)
    arrayptr->push_back(input);
  if (arrayptr->size() <= 1) throw std::invalid_argument("user provided empty array!");
  return;
}

void print_array(std::vector<int> *arrayptr)
{
  for (auto i : *arrayptr)
    std::cout << i << ' ';
  std::cout << "\n";
  return;
}

// ------------- SORT ALGO -------------

void swap(int *a, int *b)
{
  int _temp = *a;
  *a = *b;
  *b = _temp;
}

int make_partition(std::vector<int> *arrayptr, int low, int high)
{
  int _pivot = arrayptr->at(high);
  int _iter = (low - 1);
  for (int _inner_iter = low; _inner_iter <= high - 1; _inner_iter++)
  {
    if (arrayptr->at(_inner_iter) <= _pivot)
    {
      _iter++;
      swap(&arrayptr->at(_iter), &arrayptr->at(_inner_iter));
    }
  }
  swap(&arrayptr->at(_iter + 1), &arrayptr->at(high));
  return (_iter + 1);
}

void qsort_array(std::vector<int> *arrayptr, int low, int high)
{
  if (low < high)
  {
    int _partition = make_partition(arrayptr, low, high);
    qsort_array(arrayptr, low, _partition - 1);
    qsort_array(arrayptr, _partition + 1, high);
  }
  return;
}

void sort_array(std::vector<int> *arrayptr)
{
  std::cout << "Sorting array ..." << std::endl;
  qsort_array(arrayptr, 0, (arrayptr->size() - 1));
  std::cout << "Sorted array 😎" << std::endl;
  return;
}

// ---------- SEARCH ALGO ------------

int binary_search(std::vector<int> *arrayptr, int low, int high, int number)
{
  if (low <= high)
  {
    int _mid = (low + high) / 2, _current = arrayptr->at(_mid);
    if (_current == number) return _mid;
    if (_current > number) return binary_search(arrayptr, low, _mid - 1, number);
    if (_current < number) return binary_search(arrayptr, _mid + 1, high, number);
  }
  return -1;
}

void search_for_x(std::vector<int> *arrayptr, int x)
{
  int index = binary_search(arrayptr, 0, arrayptr->size() - 1, x);
  if (index == -1) throw std::invalid_argument("Number not found!");
  std::cout << "Number found @ " << index + 1 << std::endl;
  return;
}

// --------------- MAIN ----------------
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

  // end of function
  return 0;
}