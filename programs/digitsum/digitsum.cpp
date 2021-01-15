#include <iostream>

/** Prints the digit sum
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
    int number;

    std::cout << "Let's find out the digit sum!" << std::endl;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> number;

    int intermediate, sum = 0;

    while (number > 0)
    {
        intermediate = number % 10;
        sum = sum + intermediate;
        number = number / 10;
    }

    std::cout << "Digit sum is " << sum << std::endl;

    //clear buffer, wait for input to close program
    std::cout << "Enter Anything to Quit :)" << std::endl;
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    std::cin.get();

    return 0;
}