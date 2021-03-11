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
  void get_employee_data(int num_of_employees, Employee emps);
  void add_employee_data(int id, std::string name, std::string desig, double sal);
  void print_employee_data();
};

void Employee::get_employee_data(int num_of_employees, Employee emps)
{
  try
  {
    while (num_of_employees > 0)
    {
      int id;
      std::string name;
      std::string designation;
      double salary;
      std::cout << "Enter ID:";
      std::cin >> id;
      std::cout << "Enter Name:";
      std::cin >> name;
      std::cout << "Enter Designation:";
      std::cin >> designation;
      std::cout << "Enter salary:";
      std::cin >> salary;

      emps.add_employee_data(id, name, designation, salary);

      num_of_employees--;
    }
  }
  catch (const std::exception &e)
  {
    std::cerr << "Error : Invalid Details!" << '\n';
  }

  return;
}

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