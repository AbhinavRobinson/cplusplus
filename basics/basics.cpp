#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

/** 
 * @see I will be avoiding declaring namespaces
 * 
 * You can add this code below and remove all std:: declarations
 * ` using namespace std; `
 */

/** Global int */ int globalVar = 0;
/** Constant global double */ const double PI = 3.141;

/** 
 * Print min max of datatypes.
 * @param name {string} datatype
 * @interface uses template T 
 *
 * @returns {null}
 */
template <typename T>
void print_min_max(std::string name)
{
    std::cout << "Min :" << name << " > " << std::numeric_limits<T>::min() << std::endl;
    std::cout << "Max :" << name << " > " << std::numeric_limits<T>::max() << std::endl;
    return;
}

/**  
 * This is our main function, and is run everytime we run the program.
 * @param argc number of args passed in main
 * @param argv array of pointers to strings
 *  
 * @returns 0 {integer}
 */
int main(int argc, char **argv)
{
    std::cout << "Welcome to the basics file." << std::endl;

    /** @private Boolean */ bool trueValue = true;
    /** @private Charachter */ char letter = 'A';

    /**
     * @see now we print the min max of the most commanly used datatypes
    */
    print_min_max<unsigned short int>("(unsigned) short int");

    print_min_max<unsigned short int>("(unsigned) short int");

    print_min_max<int>("int");

    print_min_max<long>("long");

    print_min_max<float>("float");

    print_min_max<double>("double");

    print_min_max<long double>("double");

    /**
     * @see floats are accurate upto 6 decimal places
    */
    float fx = 1.1111111;
    float fy = 1.1111111;

    /** @param printf provides printing with formatting */
    printf("Sum = %.7f\n", (fx + fy)); // Sum = 2.2222221 << lost precision

    /**
     * @see doubles are accurate upto 16 decimal places
    */
    double dx = 1.1111111111111111;
    double dy = 1.1111111111111111;

    printf("Sum = %.16f\n", (dx + dy)); // Sum = 2.2222222222222223 << lost precision

    /** @see we can also let the compiler decide the type */
    auto guessType = true;
    std::cout << "auto assigned bool (b) : " << typeid(guessType).name() << std::endl;

    /** Every type has different bite size */
    std::cout << "int byte size : " << sizeof(int) << std::endl;

    /** @return 0 {integer}, standard output for main signals successful run */
    return 0;
}