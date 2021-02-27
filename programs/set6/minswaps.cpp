#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

/**
 * @brief Min swaps required to sort an array
 *
 * @return int
 */
int main()
{
  // get size of array
  int size;

  std::cout << "Enter size of array : ";
  std::cin >> size;

  std::vector<int> unsortedArray;

  // get array
  for (int i = 0; i < size; i++)
  {
    int temp;
    std::cin >> temp;
    unsortedArray.push_back(temp);
  }

  std::pair<int, int> arrayPositionPair[size];
  for (int i = 0; i < size; i++)
  {
    arrayPositionPair[i].first = unsortedArray[i];
    arrayPositionPair[i].second = i;
  }

  std::sort(arrayPositionPair, arrayPositionPair + size);

  std::vector<bool> visited(size, false);

  int swaps = 0;

  for (int i = 0; i < size; i++)
  {
    if (visited[i] || arrayPositionPair[i].second == i)
      continue;

    int cycle_size = 0;
    int j = i;
    while (!visited[j])
    {
      visited[j] = 1;
      j = arrayPositionPair[j].second;
      cycle_size++;
    }
    if (cycle_size > 0)
    {
      swaps += cycle_size - 1;
    }
  }

  std::cout << "Swaps Required : ";
  std::cout << swaps << std::endl;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}