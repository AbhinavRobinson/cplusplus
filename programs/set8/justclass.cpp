#include <iostream>
#include <stdexcept>
#include <vector>

class Employee
{
  struct Emp_Details
  {
    int id;
    std::string name;
    std::string designation;
    double salary;
  };
  std::vector<Emp_Details> employees;

  public:
  void add_employee_data(int id, std::string name, std::string desig, double sal);
  void print_employee_data();
};

void Employee::add_employee_data(int id, std::string name, std::string desig, double sal)
{
  Emp_Details employee;
  employee.id = id;
  employee.name = name;
  employee.designation = desig;
  employee.salary = sal;

  employees.push_back(employee);
  return;
}

int main()
{
  return 0;
}