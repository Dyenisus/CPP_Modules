# CPP Module 1: Memory & Pointers

Manual memory management with new/delete, pointers and references, pointer-to-member functions, and the switch statement.

## Exercises

- **ex00 (Zombie)**: Stack vs heap allocation, separate constructors (`newZombie`, `randomChump`).
- **ex01 (Zombie Horde)**: Dynamic array allocation with `new[]`, bulk initialization.
- **ex02 (Ref vs Ptr)**: Pointer dereferencing vs reference binding, address comparison.
- **ex03 (Weapon)**: Weapon class, HumanA/B classes using const references vs pointers.
- **ex04 (File Replace)**: File I/O (`ifstream`, `ofstream`), string search-and-replace, creates `.replace` file.
- **ex05 (Harl)**: Pointer-to-member functions, method dispatch table pattern.
- **ex06 (Harl Filtered)**: Switch statement for complaint filtering, default fallthrough.

## Key Concepts

- Memory allocation with `new` / `new[]`; deallocation with `delete` / `delete[]`
- Pointers vs references (lifetime, nullability, syntax)
- Pointer-to-member syntax and member function pointers
- File streams and string manipulation
- Switch statements and fallthrough behavior
- Reference variables and const-correct parameters

## Compilation & Execution

```bash
cd ex00 && make && ./zombie           # Stack/heap zombie
cd ../ex01 && make && ./zombieHorde   # Array allocation
cd ../ex02 && make && ./reference     # Ptr vs ref comparison
cd ../ex03 && make && ./violence      # Weapon usage
cd ../ex04 && make && ./replace file s1 s2  # File replace
cd ../ex05 && make && ./harl          # Ptr-to-member dispatch
cd ../ex06 && make && ./harl DEBUG    # Switch filter (VERBOSE, DEBUG, INFO, WARNING, ERROR)
```

Standard make targets: `make`, `make clean`, `make fclean`, `make re`.
