# CPP Module 3: Inheritance

Single and multiple inheritance, overriding virtual methods, protected members, and virtual inheritance resolution.

## Exercises

- **ex00 (ClapTrap)**: Base class with hit points, energy, attack damage. Methods: `attack()`, `takeDamage()`, `beRepaired()`.
- **ex01 (ScavTrap)**: Inherits from ClapTrap, overrides `attack()`, adds `guardGate()` method.
- **ex02 (FragTrap)**: Inherits from ClapTrap, adds `highFivesGuys()` method. Demonstrates separate inheritance trees.
- **ex03 (DiamondTrap)**: Multiple inheritance from ScavTrap and FragTrap (Diamond Problem), uses virtual inheritance via ClapTrap, disambiguates which parent's `attack()` is used with `whoAmI()`.

## Key Concepts

- Public inheritance and protected member access
- Method overriding and virtual destructors
- Protected attributes shared by derived classes
- Multiple inheritance and the Diamond Problem
- Virtual inheritance to resolve duplicate base classes
- Initialization lists calling parent constructors

## Compilation & Execution

```bash
cd ex00 && make && ./claptrap     # Base class test
cd ../ex01 && make && ./scavtrap  # Single inheritance + override
cd ../ex02 && make && ./fragtrap  # Separate inheritance chain
cd ../ex03 && make && ./diamondtrap  # Multiple inheritance, virtual base
```

Standard make targets: `make`, `make clean`, `make fclean`, `make re`.
