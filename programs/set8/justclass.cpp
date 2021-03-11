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
  void get_employee_data(int num_of_employees);
  void add_employee_data(int id, std::string name, std::string desig, double sal);
  void print_employee_data();
};

void Employee::print_employee_data()
{
  for (Emp_Details emp : employees)
    if (emp.salary > 20000)
      std::cout << emp.id << " " << emp.name << " " << emp.designation << " " << emp.salary << std::endl;
  return;
}

void Employee::get_employee_data(int num_of_employees)
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

      add_employee_data(id, name, designation, salary);

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
  int emps;
  std::cout << "Enter nos of employees to add :";
  std::cin >> emps;
  Employee emp_data;
  emp_data.get_employee_data(emps);
  std::cout << "Show All Emps with Sal > 20K" << std::endl;
  emp_data.print_employee_data();
  // end of program
  return 0;
}