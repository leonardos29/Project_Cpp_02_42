#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

    class Fixed 
    {
        public:
            Fixed(void);
            Fixed(Fixed const &other);
            Fixed&operator=(Fixed const &other);
            ~Fixed(void);
            int getRawBits(void) const;
            void setRawBits(int const raw);

        private:
            int _fixedPointValue;
            static const int _fracBits = 8;
    };
#endif