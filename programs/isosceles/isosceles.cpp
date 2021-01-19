#include <iostream>
#include <limits.h>

/** Checks whether the triangle is isoceles or not.
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
    int a, b, c;

    std::cout << "Is it Isosceles?" << std::endl;
    std::cout << "Enter first side length: " << std::endl;
    std::cin >> a;
    std::cout << "Enter second side length: " << std::endl;
    std::cin >> b;
    std::cout << "Enter third side length: " << std::endl;
    std::cin >> c;

    if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
    {
        std::cout << "The Triangle is Isosceles" << std::endl;
    }
    else
    {
        std::cout << "The Triangle is not Isosceles" << std::endl;
    }

    //clear buffer, wait for input to close program
    std::cout << "Enter Anything to Quit :)" << std::endl;
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    std::cin.get();

    return 0;
}