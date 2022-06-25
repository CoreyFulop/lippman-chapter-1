// 1_6.cpp
#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	// just get rid of the end of statement ; on the first and second lines of the output.
	std::cout << "The sum of " << v1 
		<< " and " << v2 
		<< " is " << v1 + v2 << std::endl;
	return 0;
}