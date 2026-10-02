🧠 C++ Module 02

42 C++ Module 02 — Ad-hoc Polymorphism, Operator Overloading & Orthodox Canonical Form

This project is part of the C++ Modules from the 42 curriculum.

The goal of this module is to deepen the understanding of Object-Oriented Programming in C++, focusing on operator overloading, fixed-point arithmetic, references, const correctness, and the Orthodox Canonical Form.

🛠️ Technologies





Language: C++98

Compiler: c++

Flags: -Wall -Wextra -Werror

Build system: Makefile

📚 Exercises
Exercise	Topic	Status
🟢 ex00	Orthodox Canonical Form	✅ Completed
🟢 ex01	Fixed-Point Number Class	✅ Completed
🟢 ex02	Operator Overloading	✅ Completed
⚪ ex03	BSP / Point in Triangle	Optional
🧱 ex00 — Orthodox Canonical Form

Introduction to the Fixed class and the Orthodox Canonical Form.

Implemented:

🏗️ Default constructor

📋 Copy constructor

✏️ Copy assignment operator

🗑️ Destructor

📖 getRawBits()

🔧 setRawBits()

The class stores the fixed-point value internally as an integer.

🔢 ex01 — Fixed-Point Numbers

The Fixed class becomes more useful by supporting integer and floating-point values.

Implemented

🔢 Integer constructor

🌊 Floating-point constructor

🔄 toFloat()

🔢 toInt()

📤 operator<<

🎯 Fixed-point representation with 8 fractional bits

Fixed-Point Representation

The class uses:

8 fractional bits
2^8 = 256


For example:

5.5 × 256 = 1408


Therefore, the raw value representing 5.5 is 1408.

⚙️ ex02 — Now We're Talking

The main focus of this exercise is operator overloading.

🔍 Comparison Operators
>
<
>=
<=
==
!=

➕ Arithmetic Operators
+
-
*
/

🔄 Increment & Decrement
++a
a++

--a
a--


The smallest representable increment is:

1 / 256 = 0.00390625

📊 Min & Max

Implemented both mutable and const versions of:

min()
max()


These functions return references to the existing objects rather than creating unnecessary copies.

🧮 Fixed-Point Arithmetic

One of the main concepts of this module is maintaining the correct scale during arithmetic operations.

Addition & Subtraction

Raw values can be added or subtracted directly because they use the same scale.

rawA + rawB
rawA - rawB

Multiplication

Multiplying two fixed-point raw values introduces an extra scaling factor, so one factor of 2^8 must be removed.

(rawA × rawB) / 256

Division

Division requires preserving the fractional precision, so the dividend is scaled before dividing.

(rawA × 256) / rawB

🧪 Example Output

The ex02 implementation produces the expected results from the subject:

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

🧰 Compilation

Clone the repository and enter the desired exercise:

git clone <repository-url>
cd CPP02
cd ex02


Compile using:

make


Or manually:

c++ -Wall -Wextra -Werror -std=c++98 *.cpp


Run:

./fixed


Clean the build:

make clean


Remove all generated files:

make fclean


Rebuild everything:

make re

🎯 Learning Goals

Through this module, I practiced:

🧱 Object-Oriented Programming

📐 Orthodox Canonical Form

🔧 Operator overloading

🧮 Fixed-point arithmetic

📋 Copy constructors

✏️ Copy assignment

🔗 References

🔒 const correctness

⚙️ Static member functions

🔄 Pre/post increment and decrement

💻 C++98 programming

📁 Project Structure
CPP02/
├── ex00/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   └── Makefile
│
├── ex02/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── main.cpp
│   └── Makefile
│
└── ex03/
    ├── Fixed.cpp
    ├── Fixed.hpp
    ├── Point.cpp
    ├── Point.hpp
    ├── bsp.cpp
    ├── main.cpp
    └── Makefile

📝 Notes

This project follows the restrictions and requirements of the 42 C++ Module 02 subject, including the use of C++98 and the required compiler flags.

🚀 Learning by understanding the concepts behind the implementation, not just the final result.

👨‍💻 Author

42 Student

🏫 42 School

C++ Module 02 — Ad-hoc Polymorphism, Operator Overloading and the Orthodox Canonical Class Form

⭐ Part of my journey through the 42 Common Core.
