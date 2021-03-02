#include <iostream>
#include <vector>
/**
 * @brief Get pointer of vector and traverse to find target
 *
 * @param vec_ptr
 * @param target
 * @return int
 */
int find_item_with_ptr(std::vector<std::string> *vec_ptr, std::string target)
{
  for (int i = 0; i < vec_ptr->size(); i++) // check for target
    if (vec_ptr->at(i) == target) return i; // true
  return -1;                                // false
}
/**
 * @brief Use pointers to traverse a list and find a key.
 *
 * @return int
 */
int main()
{
  // get target (key) from user
  std::string target;
  std::cout << "Enter the target name:";
  std::cin >> target;
  // get name list
  // note : list is a vector pointer
  std::vector<std::string> *list_ptr = new std::vector<std::string>;
  std::cout << "Enter the list of names (to close, use end)"
            << std::endl;
  std::string input;
  while ((std::cin >> input) && (input != "end"))
    list_ptr->push_back(input); // since list is a pointer, we use ->
  std::cout << "Inputs taken, finding target ..." << std::endl;
  // pair found?
  int is_target_present = find_item_with_ptr(list_ptr, target);
  // check
  if (is_target_present != -1)
    std::cout << "Present @ " << (is_target_present + 1);
  else
    std::cout << "Not Present";
  // end of function
  std::cout << std::endl;
  // memory cleanup
  list_ptr->clear();
  delete list_ptr;
  target = "";
  is_target_present = 0;
  // cleanup complete
  return 0;
}