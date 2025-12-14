#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello World!!!\n";
    
    std::cin.clear(); // Reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any characters in the buffer until we find an end character
    std::cin.get(); // Get one more char from the user

    return 0;
}
