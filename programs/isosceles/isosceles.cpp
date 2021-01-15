#include <iostream>

/** Checks whether the triangle is isoceles or not.
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
    int a, b, c, d;

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

    // Just using to stop the program from closing :)
    std::cin >> d;

    return 0;
}