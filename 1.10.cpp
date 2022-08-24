#include <iostream>

int main()
{
    std::cout << "This program prints a countdown from 10 to 0" << std:: endl;
    int number = 10;
    while (number >= 0)
    {
        std::cout << number << " ";
        --number;
    }
    return 0;
}