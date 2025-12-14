#include <iostream>

int intialisation_quirks()
{
    // Dangers of initialization
    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion
    w1 = 4.8;       // okay: copy-assignment allows narrowing conversion of 4.8 to 4
    std::cout << w1;// outputs 4

    int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    int w3 (4.5);   // compiles: w3 direct-initialized to value 4
    
    int width {}; // value-initialization / zero-initialization to value 0

    return 0;
}

int main()
{
    int a;         // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)

    intialisation_quirks();

    return 0;
}
