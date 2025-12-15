#include <iostream>

int main()
{
    std::cout << "Enter two numebrs separated by a space: ";
    int x{}, y{};
    std::cin >> x >> y; // Can be accepted with a space delimiter!

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}
