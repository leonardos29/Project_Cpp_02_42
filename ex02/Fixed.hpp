#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

    class Fixed 
    {
        public:
            Fixed(void);
            Fixed(int const value);
            Fixed(float const value);
            Fixed(Fixed const &other);
            Fixed&operator=(Fixed const &other);
            bool operator>(Fixed const &other) const;
            bool operator<(Fixed const &other) const;
            bool operator>=(Fixed const &other) const;
            bool operator<=(Fixed const &other) const;
            bool operator==(Fixed const &other) const;
            bool operator!=(Fixed const &other) const;
            Fixed operator+(Fixed const &other) const;
            Fixed operator-(Fixed const &other) const;
            Fixed operator*(Fixed const &other) const;
            Fixed operator/(Fixed const &other) const;
            Fixed &operator++(void);
            Fixed operator++(int);
            Fixed &operator--(void);
            Fixed operator--(int);
            ~Fixed(void);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat(void) const;
            int toInt(void) const;
            static Fixed &min(Fixed &a, Fixed &b);
            static const Fixed &min(Fixed const &a,Fixed const &b);
            static Fixed &max(Fixed &a,Fixed &b);
            static const Fixed &max(Fixed const &a,Fixed const &b);

        private:
            int _fixedPointValue;
            static const int _fracBits = 8;
    };
    std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif