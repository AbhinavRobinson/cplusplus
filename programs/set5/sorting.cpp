#include <iostream>
#include <limits.h>
#include <math.h>
#include <random>
#include <vector>

// swap
void swap(int *low, int *high)
{
  int t = *low;
  *low = *high;
  *high = t;
}

// partition
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

// main quicksort algo
void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}

// print function
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

  // sort
  quickSort(rand_array, 0, size - 1);

  // print sorted
  printf("Sorted array: \n");
  printArray(rand_array, size);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  delete[] rand_array;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}