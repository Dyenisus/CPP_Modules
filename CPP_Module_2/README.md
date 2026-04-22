# CPP Module 2: Ad-Hoc Polymorphism

Operator overloading, the Orthodox Canonical Form, conversion operators, and fixed-point arithmetic.

## Exercises

- **ex00 (Fixed)**: Orthodox Canonical Form (default constructor, copy constructor, copy assignment, destructor), raw bit access.
- **ex01 (Fixed Advanced)**: Constructors from `int` and `float`, conversion methods (`toInt()`, `toFloat()`), stream insertion operator overload.
- **ex02 (Fixed Operators)**: All comparison operators (>, <, >=, <=, ==, !=), arithmetic operators (+, -, *, /), pre/post increment/decrement, static min/max.
- **ex03 (BSP)**: Barycentric Space Partitioning; uses Fixed for geometric point-in-triangle test.

## Key Concepts

- Orthodox Canonical Form (OCF): all 4 special member functions
- Operator overloading for arithmetic, comparison, and assignment
- Stream insertion `operator<<` as free function
- Fixed-point number representation (8 fractional bits)
- Pre/post increment operators (returning reference vs value)
- Static member functions and method overloading (const variants)

## Compilation & Execution

```bash
cd ex00 && make && ./fixed       # OCF basics
cd ../ex01 && make && ./fixed    # Conversion operators
cd ../ex02 && make && ./fixed    # All operators
cd ../ex03 && make && ./bsp      # Point-in-triangle test
```

Standard make targets: `make`, `make clean`, `make fclean`, `make re`.
