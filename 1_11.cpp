# include <iostream>

int main()
{
    std::cout << "This program prints all the numbers in a range" << std::endl;
    int lower = 0, upper = 0;
    std::cout << "Enter the lower, and upper limits: ";
    std::cin >> lower >> upper;
    while (lower <= upper)
    {
        std::cout << lower << " ";
        ++lower;
    }
    return 0;
}