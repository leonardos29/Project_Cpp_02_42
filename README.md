C++ Module 02
Overview

This project is part of the C++ Modules from the 42 curriculum.

The goal of Module 02 is to introduce ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Form while working with a custom fixed-point number class.

The project is written according to the C++98 standard.

Exercises
ex00 — My First Class in Orthodox Canonical Form

Introduction to the Fixed class and the Orthodox Canonical Form.

Implemented:

Default constructor

Copy constructor

Copy assignment operator

Destructor

getRawBits()

setRawBits()

ex01 — Towards a More Useful Fixed-Point Number Class

The Fixed class is extended to support useful fixed-point conversions.

Implemented:

Integer constructor

Floating-point constructor

toFloat()

toInt()

Stream insertion operator <<

Fixed-point conversion using 8 fractional bits

ex02 — Now We're Talking

The Fixed class is extended with operator overloading.

Implemented:

Comparison operators: >, <, >=, <=, ==, !=

Arithmetic operators: +, -, *, /

Pre-increment and post-increment

Pre-decrement and post-decrement

min() and max() for mutable and constant objects

The smallest representable increment is:

1 / 256 = 0.00390625

ex03 — BSP

An optional exercise introducing a Point class and a Binary Space Partitioning function to determine whether a point is inside a triangle.

This exercise is optional according to the Module 02 subject.

Fixed-Point Representation

The Fixed class uses an integer to store the fixed-point value and reserves 8 bits for the fractional part.

The scaling factor is:

2^8 = 256


For example:

5.5 × 256 = 1408


So 5.5 is internally represented by the raw value 1408.

Compilation

The project follows the compilation requirements from the 42 subject:

c++ -Wall -Wextra -Werror -std=c++98


A Makefile is provided for building the project.

Concepts Practiced

Classes and encapsulation

Orthodox Canonical Form

Constructors and destructors

Copy semantics

Operator overloading

Fixed-point arithmetic

Static member functions

References and const correctness

Pre-increment and post-increment

Pre-decrement and post-decrement

C++98 syntax and restrictions

Author

42 Student — C++ Module 02
