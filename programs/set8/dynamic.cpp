#include <iostream>
#include <vector>

struct noofcustomers
{
  std::string name;
  int phone_number;
};

void add_customer_data(std::vector<struct noofcustomers> *customer_list)
{
  int *p_num = NULL;
  p_num = new int;
  std::string *name = NULL;
  name = new std::string;

  std::cout << "Enter Name:";
  std::cin >> *name;
  std::cout << "Enter Phone Number:";
  std::cin >> *p_num;

  noofcustomers *new_cust = NULL;
  new_cust = new noofcustomers;

  new_cust->name = *name;
  new_cust->phone_number = *p_num;

  customer_list->push_back(*new_cust);

  delete new_cust;
  delete p_num;
  delete name;
  return;
}

void print_customer_data(std::vector<struct noofcustomers> *customer_list)
{
  if (customer_list->size() == 0)
  {
    std::cout << "No customers added!" << std::endl;
    return;
  }

  for (noofcustomers i : *customer_list)
  {
    std::cout << "Name: " << i.name << " Number: " << i.phone_number << std::endl;
  }

  return;
}

int main()
{
//   init pointers
  std::vector<noofcustomers> *customer_list = NULL;
  customer_list = new std::vector<noofcustomers>;
  int *input = NULL;
  input = new int;

//     get input
  std::cout << "Customer List\n1 - Enter New Customer\n2 - Print List\n0 - Exit" << std::endl;
  while ((std::cin >> *input) && input != 0)
  {
//     switch according to input
    switch (*input)
    {
    case 0:
      std::cout << "Exiting ..." << std::endl;
      delete input;
      delete customer_list;
      return 0;
    case 1:
      add_customer_data(customer_list);
      break;
    case 2:
      print_customer_data(customer_list);
      break;
    }
    std::cout << "Customer List\n1 - Enter New Customer\n2 - Print List\n0 - Exit" << std::endl;
  }
}
