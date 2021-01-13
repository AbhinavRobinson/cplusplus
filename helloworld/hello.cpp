#include <iostream>
#include <vector>
#include <string>

/**
 * @author Abhinav Robinson
 * 
 * @param main {function} A simple hello world program
 * 
 * @returns 0 {integer}
 */
int main()
{
    /** @private */ std::vector msg = {"Hello", "World", "!"};

    /** auto identify word type, iterate and print*/
    for (auto &word : msg)
    {
        std::cout << word << (word != ("World") ? " " : "");
    }

    std::cout << std::endl;

    return 0;
}