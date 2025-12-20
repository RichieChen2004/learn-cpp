#include <iostream>

int getValueFromUserUB()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// note: no return statement
}

int main()
{
	int num { getValueFromUserUB() }; // evaluates to 1 for some reason?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}
