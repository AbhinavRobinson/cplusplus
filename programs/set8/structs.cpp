#include <iostream>

struct Rainfall_Data
{
  int day_of_month;
  int month;
  int year;
  int rainfall;
};

void get_rainfall_data()
{
  return;
}

void print_rainfall_data()
{
  return;
}

int main()
{
  std::cout << "Create new entry in Rainfall Object\nEnter (1) to add Entry\nEnter (2) to Print Data\nEnter (3) to Exit" << std::endl;
  std::cout << "Enter-->";
  int input;
  while ((std::cin >> input) && input != 3)
  {
    if (input == 1) get_rainfall_data();
    if (input == 2) print_rainfall_data();
    if (input != 1 && input != 2) std::cout << "Incorrect Option\n";
  }
  std::cout << "Exiting Program" << std::endl;
  return 0;
}