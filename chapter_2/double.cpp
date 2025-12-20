#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter a value: ";
    int x{};
    std::cin >> x;
    return x;
}

void printDouble(int num)
{
    std::cout << "Double that number is: " << num * 2 << '\n';
}

int main()
{
    printDouble(getValueFromUser());
    printDouble(getValueFromUser());
}
