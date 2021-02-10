#include <limits.h>
#include <math.h>

#include <vector>
#include <iostream>

using namespace std;

vector<int> getDimesions(int sides)
{
  vector<int> dimensions;

  if (sides == 3)
  {
    int b, h;
    cout << "Enter Dimensions of Triangle" << endl;
    cout << "Enter Base : ";
    cin >> b;
    dimensions.push_back(b);
    cout << "Enter Height : ";
    cin >> h;
    dimensions.push_back(h);
  }
  else if (sides == 4)
  {
    int a, b, c, d;
    cout << "Enter Dimensions of Rectangle" << endl;
    cout << "Enter Side 1 : ";
    cin >> a;
    dimensions.push_back(a);
    cout << "Enter Side 2 : ";
    cin >> b;
    dimensions.push_back(b);
    cout << "Enter Side 3 : ";
    cin >> c;
    dimensions.push_back(c);
    cout << "Enter Side 4 : ";
    cin >> d;
    dimensions.push_back(d);
  }
  else
  {
    int r;
    cout << "Enter Dimensions of Circle" << endl;
    cout << "Enter Radius : ";
    cin >> r;
    dimensions.push_back(r);
  }

  return dimensions;
}

void getArea(vector<int> dimensions)
{
  int size = dimensions.size();

  return;
}

int main()
{
  unsigned short int sides;

  // Lets get shape and dimensions
  cout << "Enter number of sides : ";
  cin >> sides;

  vector<int> dimensions = getDimesions(sides);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}