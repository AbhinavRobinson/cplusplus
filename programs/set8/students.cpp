#include <iostream>
#include <vector>

class Student
{
  public:
  int roll_no;
  std::string name;
  Student(int roll_no, std::string name);
};

class ClassRoom
{
  std::vector<Student> students;

  public:
  void add_student();
  void get_all_students();
};

Student::Student(int std_roll_no, std::string std_name)
{
  roll_no = std_roll_no;
  name = std_name;
  return;
}

void ClassRoom::add_student()
{
  int roll_no;
  std::string name;

  std::cout << "Enter Student Name:";
  std::cin >> name;
  std::cout << "Enter Student Roll Number:";
  std::cin >> roll_no;

  Student student(roll_no, name);
  students.push_back(student);

  std::cout << "SUCCESS : Student Added" << std::endl;
  return;
}

void ClassRoom::get_all_students()
{
  if (students.size() == 0)
  {
    std::cout << "No student added." << std::endl;
    return;
  }

  for (Student i : students)
    std::cout << i.roll_no << "-" << i.name << std::endl;

  return;
}

int main()
{
  std::cout << "Welcome to Class Room\n";
  int usr_input;
  ClassRoom class_room;
  std::cout << "Enter [1] to Add Student\nEnter [2] to Print Student Details\nEnter [0] to Quit" << std::endl;
  while ((std::cin >> usr_input) && usr_input != 0)
  {
    switch (usr_input)
    {
    case 0:
      std::cout << "Exiting..." << std::endl;
      return 0;
      break;

    case 1:
      class_room.add_student();
      break;

    case 2:
      class_room.get_all_students();
      break;

    default:
      std::cout << "ERROR : Enter valid option" << std::endl;
      break;
    }
    std::cout << "Enter [1] to Add Student\nEnter [2] to Print Student Details\nEnter [0] to Quit" << std::endl;
  }
  return 0;
}