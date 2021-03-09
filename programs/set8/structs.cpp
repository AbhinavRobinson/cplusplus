#include <iostream>
#include <vector>

struct Date
{
  int day;
  int month;
  int year;
};

struct Rainfall_Data
{
  std::vector<struct Date> Date;
  int rainfall;
};

void get_rainfall_data(std::vector<struct Rainfall_Data> *rainfall_data_array)
{
  return;
}

void print_rainfall_data(std::vector<struct Rainfall_Data> *rainfall_data_array)
{
  return;
}

int main()
{
  std::vector<struct Rainfall_Data> rainfall_data_array; // declare array of struct Rainfall_Data

  std::cout << "Create new entry in Rainfall Object\nEnter (1) to add Entry\nEnter (2) to Print Data\nEnter (3) to Exit" << std::endl;
  std::cout << "Enter-->";
  int input;
  while ((std::cin >> input) && input != 3)
  {
    if (input == 1) get_rainfall_data(&rainfall_data_array);
    if (input == 2) print_rainfall_data(&rainfall_data_array);
    if (input != 1 && input != 2) std::cout << "Incorrect Option\n";
  }
  std::cout << "Exiting Program" << std::endl;
  return 0;
}