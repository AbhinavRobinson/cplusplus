#include <iostream>
#include <limits.h>
#include <math.h>
#include <random>
#include <vector>

void swap(int *low, int *high)
{
  int temp = *low;
  *low = *high;
  *high = temp;
}

int makePartition(std::vector<int> list, int low, int high)
{
  int pivot = list[high];
  int i = low - 1;

  for (int j = 0; i <= high - 1; j++)
  {
    if (list[j] <= pivot)
    {
      i++;
      swap(&list[i], &list[j]);
    }
  }

  swap(&list[i + 1], &list[high]);
  return i + 1;
}

std::vector<int> quicksort(std::vector<int> list, int low, int high)
{
  // quick sort
  // lets use pivot as medium of 3s (left, center, right)
  if (low < high)
  {
    // make partition
    int pivot = makePartition(list, low, high);

    // goes deeper into recursion
    quicksort(list, low, pivot);
    quicksort(list, pivot + 1, high);
  }
}

/**
 * @brief Sort a list of random intgers in ascending order.
 * 
 * @return int 
 */
int main()
{
  std::random_device rd;
  std::mt19937 rng(rd());
  std::uniform_int_distribution<int> unif(1, 100);

  std::vector<int> rand_list;

  for (int i = 0; i < 10; i++)
  {
    rand_list.push_back(unif(rng));
  }

  std::cout << "Generated list : [";
  for (auto i : rand_list)
    std::cout << i << " ";
  std::cout << "]\n";

  return 0;
}