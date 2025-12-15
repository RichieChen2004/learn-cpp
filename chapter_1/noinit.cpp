#include <iostream>


int main()
{
    int x; // no initialiser thus random value

    std::cout << x <<'\n';

    std::cout << sizeof(int) << '\n';

    std::cout << 3 + 4
        + 5 + 6
        * 7 * 8;
    return 0;
}
