#include <iostream>
#include <stdexcept>

class Employee
{
  int employee_id;
  std::string employee_name;
  std::string employee_designation;
  double monthly_salary;

  public:
  void add_employee_data(int id, std::string name, std::string desig, double sal);
  void print_employee_data();
};

int main()
{
  return 0;
}