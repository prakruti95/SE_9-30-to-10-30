#include <iostream>

// Inline function definition
inline int cube(int s) 
{
    return s * s * s;
}

int main() {
    // The compiler replaces this call with: int result = 3 * 3 * 3;
    std::cout << "Cube of 3 is: " << cube(3) << std::endl; 
    return 0;
}
