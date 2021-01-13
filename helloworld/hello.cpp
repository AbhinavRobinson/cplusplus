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
    /** @private */ std::vector<std::string> msg{"Hello", "World", "!"};

    for (const std::string &word : msg)
    {
        std::cout << word << " ";
    }

    std::cout << std::endl;

    return 0;
}