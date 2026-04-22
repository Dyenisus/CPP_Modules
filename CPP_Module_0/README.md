# CPP Module 0: Object-Oriented Fundamentals

Introduction to C++ namespaces, classes, member functions, standard I/O streams, and the Orthodox Canonical Form.

## Exercises

- **ex00 (Megaphone)**: String manipulation with `std::toupper()`, command-line argument processing.
- **ex01 (PhoneBook)**: Multi-class design (Contact, PhoneBook), encapsulation, formatted output with `iomanip`.
- **ex02 (Banking Account)**: Static members, static methods, class-wide state tracking, formatted timestamp logging.

## Key Concepts

- Classes and access modifiers (public, private)
- Constructors, destructors, copy assignment
- Member functions and const-correctness
- Standard streams: `std::cout`, `std::cerr`
- Static data members and static member functions
- String handling with `std::string`

## Compilation & Execution

Each exercise has its own Makefile:

```bash
cd ex00 && make           # Build megaphone
./megaphone "hello"       # Run with arguments

cd ../ex01 && make        # Build phonebook
./phonebook               # Interactive REPL (ADD, SEARCH, EXIT)

cd ../ex02 && make        # Build account tester
./account                 # Logs account operations with timestamps
```

Standard make targets: `make`, `make clean`, `make fclean`, `make re`.
