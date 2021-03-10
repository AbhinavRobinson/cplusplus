#include <iostream>
#include <vector>

/**
 * @brief Date Struct
 * 
 * @param day
 * @param month
 * @param year
 */
struct Date
{
  int day;
  int month;
  int year;
};

/**
 * @brief Rainfall Data Struct
 * 
 * @param Date {Struct} day, month, year
 * @param rainfall
 */
struct Rainfall_Data
{
  struct Date date;
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
  rainfall_data_collector.date.day = day;
  rainfall_data_collector.date.month = month;
  rainfall_data_collector.date.year = year;

  std::cout << "Success : Information added to object!" << std::endl;

  rainfall_data_array->push_back(rainfall_data_collector);
  return;
}

void print_rainfall_data(std::vector<struct Rainfall_Data> *rainfall_data_array)
{
  try
  {
    int data_size = rainfall_data_array->size();
    std::cout << data_size << " records found!" << std::endl;
    if (data_size == 0) return;

    int start_year = 9999, end_year = -9999;
    for (std::vector<struct Rainfall_Data>::const_iterator data_iter = rainfall_data_array->begin();
         data_iter != rainfall_data_array->end();
         ++data_iter)
    {
      if (start_year >= data_iter->date.year) start_year = data_iter->date.year;
      if (end_year <= data_iter->date.year) end_year = data_iter->date.year;
    }

    for (int curr_year = start_year; curr_year <= end_year; curr_year++)
    {
      for (int curr_month = 1; curr_month <= 12; curr_month++)
      {
        int records = 0;
        int total_rainfall = 0;

        for (std::vector<struct Rainfall_Data>::const_iterator data_iter = rainfall_data_array->begin();
             data_iter != rainfall_data_array->end();
             ++data_iter)
        {
          if (data_iter->date.month == curr_month && data_iter->date.year == curr_year)
          {
            total_rainfall += data_iter->rainfall;
            records++;
          }
        }

        int avg_rainfall = 0;

        if (records > 0)
        {
          avg_rainfall = (int)total_rainfall / records;
          std::cout << "Success : Average rainfall in "
                    << curr_month << " / " << curr_year << " was "
                    << avg_rainfall << " according to "
                    << records << " records." << std::endl;
        }
      }
    }
    std::cout << "Success : End of Records" << std::endl;
  }
  catch (const std::exception &err)
  {
    std::cout << "Error : Records couldn't be fetched!";
  }

  return;
}

/**
 * @brief Create A Rainfall Data struct and use functions to control it.
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(char argc, char *argv)
{
  std::vector<struct Rainfall_Data> rainfall_data_array; // declare array of struct Rainfall_Data

  // prompt user
  std::cout << "Create new entry in Rainfall Object\nEnter (1) to add Entry\nEnter (2) to Print Data\nEnter (3) to Exit" << std::endl;
  std::cout << "Enter-->";
  int input;
  while ((std::cin >> input) && input != 3)
  {
    // choice based execution
    if (input == 1) get_rainfall_data(&rainfall_data_array);
    if (input == 2) print_rainfall_data(&rainfall_data_array);
    if (input != 1 && input != 2) std::cout << "Failed : Incorrect option\n";
  }
  // exit
  std::cout << "Exiting Program ..." << std::endl;
  return 0;
}