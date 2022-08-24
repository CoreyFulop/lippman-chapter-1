#include <iostream>

int main()
{
    std::cout << "This program returns the sum of numbers from 50 to 100" << std::endl;
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "The sum of numbers from 500 to 100 is " << sum << "." << std::endl; 
    return 0;
}