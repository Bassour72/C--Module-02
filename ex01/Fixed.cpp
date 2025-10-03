#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
    std :: cout << "Default constructor called" << std :: endl;
}

Fixed::Fixed(const int value) 
{
    std :: cout << "Int constructor called" << std :: endl;
    _value = value << _fractionalBits;
}

Fixed::Fixed(const float value) 
{
    std :: cout << "Float constructor called"<< std :: endl;
    _value = (int)roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) 
{
    std :: cout << "Copy constructor called" << std ::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) 
{
    std :: cout << "Copy assignment operator called" << std :: endl;
    if (this != &other)
        _value = other._value;
    return *this;
}

Fixed::~Fixed() 
{
    std :: cout << "Destructor called"<< std :: endl;
}

int Fixed::getRawBits(void) const
 {
    return _value;
}

void Fixed::setRawBits(int const raw) 
{
    _value = raw;
}

float Fixed::toFloat(void) const 
{
     
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const 
{

    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) 
{
    out << fixed.toFloat();
    return out;
}


