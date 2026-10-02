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
            ~Fixed(void);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat(void) const;
            int toInt(void) const;

        private:
            int _fixedPointValue;
            static const int _fracBits = 8;
    };
    std::ostream &operator<<(std::ostream &out, Fixed const &fixed);
#endif