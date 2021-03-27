#include <iostream>
using namespace std;

class Rectangle
{
  public:
  double x, y;
  double w, h;
  Rectangle()
  {
    x = 0.0, y = 0.0, w = 1.0, h = 1.0;
  }

  Rectangle(double xin, double yin, double win, double hin)
  {
    x = xin, y = yin, w = win, h = hin;
  }

  int getArea()
  {
    return w * h;
  }

  int getPerimeter()
  {
    return 2 * (w + h);
  }

  bool contains(double xp, double yp)
  {
    if (xp < x - (w / 2)) return false;
    if (yp < y - (h / 2)) return false;
    if (xp > x + (w / 2)) return false;
    if (yp > y + (h / 2)) return false;
    return true;
  }
};

int main()
{
  double x, y;
  double w, h, xc, yc;
  cin >> x;
  cin >> y;
  cin >> h;
  cin >> w;
  cin >> xc;
  cin >> yc;
  Rectangle rdef = Rectangle();
  cout << rdef.getPerimeter() << endl;
  cout << rdef.getArea() << endl;
  cout << boolalpha << rdef.contains(0.5, 0.1) << endl;
  Rectangle r1 = Rectangle(x, y, w, h);
  cout << r1.getPerimeter() << endl;
  cout << r1.getArea() << endl;
  if (w == 0 || h == 0)
    cout << boolalpha << false << endl;
  else
    cout << boolalpha << r1.contains(xc, yc) << endl;
}