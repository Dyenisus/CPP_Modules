# CPP Module 4: Subtype Polymorphism & Interfaces

Virtual method dispatch, abstract base classes (pure virtual functions), interface contracts, and deep copy semantics.

## Exercises

- **ex00 (Animal Polymorphism)**: Animal base class with virtual `makeSound()`. Dog and Cat subclasses with overrides. Includes WrongAnimal/WrongCat to demonstrate virtual method necessity.
- **ex01 (Brain Deep Copy)**: Animal subclasses with Brain member, demonstrates proper deep copying in constructors and assignment operators.
- **ex02 (Abstract Animal)**: Makes Animal abstract via pure virtual `makeSound()`, prevents direct instantiation, enforces subclass implementation.
- **ex03 (Materia System)**: AMateria interface with Ice/Cure concrete materias. ICharacter interface with Character implementation. IMateriaSource interface with MateriaSource factory. Demonstrates composition and polymorphic ownership.

## Key Concepts

- Virtual functions and dynamic dispatch
- Pure virtual functions (`= 0`) and abstract classes
- Virtual destructors for proper cleanup in inheritance hierarchies
- Const-correct method overrides
- Polymorphic containers (pointers to base, calling virtual methods)
- Deep copy semantics with dynamic members
- Interface-based design using abstract classes
- Factory pattern for object creation

## Compilation & Execution

```bash
cd ex00 && make && ./animal       # Polymorphism demo + WrongAnimal comparison
cd ../ex01 && make && ./brain     # Deep copy with Brain member
cd ../ex02 && make && ./animal    # Abstract Animal (cannot instantiate base)
cd ../ex03 && make && ./character # Materia/Character system with factories
```

Standard make targets: `make`, `make clean`, `make fclean`, `make re`.
