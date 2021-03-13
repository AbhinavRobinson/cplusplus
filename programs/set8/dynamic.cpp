#include <iostream>
#include <vector>

struct noofcustomers
{
  std::string name;
  int phone_number;
};

void add_customer_data(std::vector<struct noofcustomers> customer_list)
{
  int *p_num = NULL;
  p_num = new int;
  std::string *name = NULL;
  name = new std::string;

  delete p_num;
  delete name;
  return;
}

void print_customer_data(std::vector<struct noofcustomers> customer_list)
{
  return;
}

int main()
{
  noofcustomers *customer_list = NULL;
  customer_list = new noofcustomers;
  int *input = NULL;
  input = new int;

  std::cout << "Customer List\n1 - Enter New Customer\n2 - Print List\n0 - Exit" << std::endl;
  while ((std::cin >> *input) && input != 0)
  {
    switch (*input)
    {
    }
    std::cout << "Customer List\n1 - Enter New Customer\n2 - Print List\n0 - Exit" << std::endl;
  }

  delete input;
  delete customer_list;
  return 0;
}