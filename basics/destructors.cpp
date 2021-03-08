#include <iostream>

/**
 * @brief Example class
 * Has Construstor and Destructor
 */
class exampleClass
{
  public:
  exampleClass() { std::cout << "Class constructed" << std::endl; }
  ~exampleClass() { std::cout << "Class destroyed" << std::endl; }
};

/**
 * @brief Main Function
 *
 * @return int
 */
int main()
{
  // create pointer to class
  char *ptr = new char[sizeof(exampleClass)];
  // create class object and assign to pointer
  exampleClass *class_ptr = new (ptr) exampleClass;
  // destroy class object
  class_ptr->exampleClass::~exampleClass();
  // delete class pointer
  delete[] ptr;
  // return OK
  return 0;
}
