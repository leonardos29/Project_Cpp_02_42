# C++ Module 02 — 42 School

## About
Introduction to ad-hoc polymorphism, operator overloading and the Orthodox Canonical Class Form (OCF) in C++98. Implements a fixed-point number class from scratch.

## Concepts
- Orthodox Canonical Form — default constructor, copy constructor, copy assignment operator, destructor
- Fixed-point numbers — binary representation with fractional bits
- Operator overloading — arithmetic, comparison, increment/decrement, stream insertion
- Static member functions
- `const` correctness

## Exercises

### ex00 — My First Class in Orthodox Canonical Form
First implementation of the `Fixed` class in OCF. Only stores raw fixed-point value with `getRawBits` and `setRawBits`.

### ex01 — Towards a more useful fixed-point number class
Adds `int` and `float` constructors with fixed-point conversion, `toFloat`, `toInt`, and `operator<<` for stream output.

### ex02 — Now we're talking
Full operator overloading — 6 comparison operators, 4 arithmetic operators, pre/post increment and decrement, and static `min`/`max` functions.

### ex03 — BSP *(optional)*
Implements a `Point` class and a `bsp` function to determine if a point lies inside a triangle using Binary Space Partitioning.

## Compilation
```bash
make        # compile
make clean  # remove objects
make fclean # remove objects and executable
make re     # recompile from scratch
```

## Requirements
- Compiler: `c++`
- Flags: `-Wall -Wextra -Werror -std=c++98`
- No STL containers or algorithms
- No `printf`, `alloc`, or `free`
- No `using namespace`