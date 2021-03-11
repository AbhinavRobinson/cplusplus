#include <iostream>
#include <stdexcept>
#include <vector>

struct Emp_Details
{
  int id;
  std::string name;
  std::string designation;
  double salary;
};

class Employee
{
  Emp_Details employee;

  public:
  void add_employee_data(int id, std::string name, std::string desig, double sal);
  void print_employee_data();
};

void Employee::add_employee_data(int id, std::string name, std::string desig, double sal)
{
  employee.id = id;
  employee.name = name;
  employee.designation = desig;
  employee.salary = sal;
  return;
}

int main()
{
  return 0;
}