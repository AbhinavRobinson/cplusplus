#include <iostream>
#include <limits.h>
#include <math.h>
#include <random>
#include <vector>

void swap(int *low, int *high)
{
  int t = *low;
  *low = *high;
  *high = t;
}

int partition(int array[], int low, int high)
{
  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}

void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}

int main()
{
  // make rand array
  int rand_array[100];
  for (int i = 0; i < 100; i++)
    rand_array[i] = rand() % 100;

  // find size
  int size = sizeof(rand_array) / sizeof(rand_array[0]);

  // print original
  printf("Original Array: \n");
  printArray(rand_array, size);
  std::cout << std::endl;

  quickSort(rand_array, 0, size - 1);

  printf("Sorted array: \n");
  printArray(rand_array, size);

  return 0;
}