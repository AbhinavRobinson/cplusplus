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
  struct Date Date;
  int rainfall;
};

void get_rainfall_data(std::vector<struct Rainfall_Data> *rainfall_data_array)
{
  std::cout << "Enter Rainfall Data -" << std::endl;
  struct Rainfall_Data rainfall_data_collector;

  int day, month, year, rainfall_amount;
  try
  {
    std::cout << "Enter Day of Day?";
    std::cin >> day;
    std::cout << "Enter Day of Month?";
    std::cin >> month;
    std::cout << "Enter Day of Year?";
    std::cin >> year;
    std::cout << "Enter Day of Rainfall Amount?";
    std::cin >> rainfall_amount;
  }
  catch (const std::exception &err)
  {
    std::cout << "Failed : Invalid data provided! Try again ...";
    return;
  }

  rainfall_data_collector.rainfall = rainfall_amount;
  rainfall_data_collector.Date.day = day;
  rainfall_data_collector.Date.month = month;
  rainfall_data_collector.Date.year = year;

  std::cout << "Success : Information added to object!" << std::endl;

  rainfall_data_array->push_back(rainfall_data_collector);
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
    if (input != 1 && input != 2) std::cout << "Failed : Incorrect option\n";
  }
  std::cout << "Exiting Program ..." << std::endl;
  return 0;
}