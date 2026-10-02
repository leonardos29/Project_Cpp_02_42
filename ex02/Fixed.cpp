#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called\n";
    this->_fixedPointValue = 0;
}
Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called\n";
    this->_fixedPointValue = other._fixedPointValue;
}
Fixed &Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &other)
        this->_fixedPointValue = other._fixedPointValue;
    return(*this);
}

Fixed::~Fixed(void)
{
     std::cout << "Destructor called\n";
}
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return(this->_fixedPointValue);
}

void Fixed::setRawBits(int const value)
{
     std::cout << "setRawBits member function called\n";
     this->_fixedPointValue = value;
}
Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called\n";
    this->_fixedPointValue = value << _fracBits;
}
Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called\n";
    this->_fixedPointValue = roundf(value * (1 << _fracBits));
}

float Fixed::toFloat(void) const
{
    return(this->_fixedPointValue / (float)(1 << _fracBits));
}

int Fixed::toInt(void) const
{
    return(this->_fixedPointValue >> this->_fracBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(Fixed const &other) const
{
    return(this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(Fixed const &other) const
{
    return(this->_fixedPointValue < other._fixedPointValue);
}
bool Fixed::operator>=(Fixed const &other) const
{
    return(this->_fixedPointValue >= other._fixedPointValue);
}
bool Fixed::operator<=(Fixed const &other) const
{
    return(this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(Fixed const &other) const
{
    return(this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(Fixed const &other) const
{
    return(this->_fixedPointValue != other._fixedPointValue);
}

Fixed Fixed::operator+(Fixed const &other) const
{
    Fixed new_obg;
    new_obg._fixedPointValue = this->_fixedPointValue + other._fixedPointValue;
    return(new_obg);
}

Fixed Fixed::operator-(Fixed const &other) const
{
    Fixed new_obg;
    new_obg._fixedPointValue = this->_fixedPointValue - other._fixedPointValue;
    return(new_obg);
}

Fixed Fixed::operator*(Fixed const &other) const
{
    Fixed new_obg;
    new_obg._fixedPointValue = (this->_fixedPointValue * other._fixedPointValue) >> _fracBits;
    return(new_obg);
}

Fixed Fixed::operator/(Fixed const &other) const
{
    Fixed new_obg;
    new_obg._fixedPointValue = (this->_fixedPointValue << _fracBits) / other._fixedPointValue;
    return(new_obg);
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed new_obj(*this);
    this->_fixedPointValue++;
    return(new_obj);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed new_obj(*this);
    this->_fixedPointValue--;
    return(new_obj);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    if(a < b)
        return(a);
    return(b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) 
{
    if(a < b)
        return(a);
    return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    if(a > b)
        return(a);
    return(b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) 
{
    if(a > b)
        return(a);
    return(b);
}