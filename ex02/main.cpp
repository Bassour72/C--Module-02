#include "Fixed.hpp"

// int main( void ) 
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); 
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }

int main(void)
{
    std::cout << "=== Constructors & Basic Ops ===\n";
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10);
    Fixed d(0);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    std::cout << "\n=== Division Tests ===\n";
    std::cout << "c / b = " << (c / b) << "\n";
    d / Fixed(0);
    std::cout << "\n=== Increment & Decrement ===\n";
    std::cout << "++a = " << ++a << "\n";
    std::cout << "a after prefix++: " << a << "\n";
    std::cout << "a++ = " << a++ << "\n";
    std::cout << "a after postfix++: " << a << "\n";

    Fixed o(42);
    std::cout << "o before prefix++: " << o.getRawBits() << "\n";
    Fixed m = ++o;
    std::cout << "o after prefix++: " << o.getRawBits() << "\n";
    std::cout << "m (result of ++o): " << m.getRawBits() << "\n";

    std::cout << "\n=== Comparison ===\n";
    a = b;
    a++;
    std::cout << "a = " << a << ", b = " << b << "\n";
    if (a == b)
        std::cout << "a == b\n";
    else
        std::cout << "a != b\n";

    std::cout << "\n=== Max Function ===\n";
    std::cout << "max(a, b) = " << Fixed::max(a, b) << "\n";

    std::cout << "\n=== Postfix & Prefix Decrement ===\n";
    std::cout << "a before postfix--: " << a.getRawBits() << "\n";
    Fixed x = a--;
    std::cout << "a after postfix--: " << a.getRawBits() << "\n";
    std::cout << "x (result of a--): " << x.getRawBits() << "\n";

    std::cout << "\n=== Copy Assignment ===\n";
    Fixed obj1(0);
    Fixed obj2(10);
    std::cout << "obj1 = " << obj1 << ", obj2 = " << obj2 << "\n";
    obj1 = obj2;
    std::cout << "After assignment, obj1 = " << obj1 << "\n";
    return 0;
}
