#include <limits.h>
#include <math.h>

#include <vector>
#include <iostream>

using namespace std;

class CalculateArea
{
public:
  void calcArea(int base, int height)
  {
    cout << "Area : ";
    cout << 0.5 * base * height << endl;
  }
  void calcArea(int a, int b, bool isRect)
  {
    cout << "Area : ";
    cout << a * b << endl;
  }
  void calcArea(int radius)
  {
    cout << "Area : ";
    cout << 3.1415 * (radius * radius) << endl;
  }
};

void getArea(int sides)
{
  vector<int> dimensions;

  CalculateArea areaGetter;

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

    areaGetter.calcArea(b, h);
  }
  else if (sides == 4)
  {
    int a, b, c, d;
    cout << "Enter Dimensions of Rectangle" << endl;
    cout << "Enter Sides A : ";
    cin >> a;
    dimensions.push_back(a);
    cout << "Enter Sides B : ";
    cin >> b;
    dimensions.push_back(b);
    dimensions.push_back(0);
    dimensions.push_back(0);

    areaGetter.calcArea(a, b, true);
  }
  else
  {
    int r;
    cout << "Enter Dimensions of Circle" << endl;
    cout << "Enter Radius : ";
    cin >> r;
    dimensions.push_back(r);

    areaGetter.calcArea(r);
  }

  return;
}

int main()
{
  unsigned short int sides;

  // Lets get shape and dimensions
  cout << "Enter number of sides : ";
  cin >> sides;

  getArea(sides);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  sides = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}