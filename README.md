# CPP Module 03

Inheritance: constructing derived classes, calling parent constructors, and keeping the Orthodox Canonical Form intact through the hierarchy.

> Part of the **42 school curriculum**. Built by **Arda Aycan**.

## Exercises

| Exercise | Binary | What it demonstrates |
| --- | --- | --- |
| `ex00` | `claptrap_test` | The base `ClapTrap`: hit points, energy, attack and repair. |
| `ex01` | `scavtrap_test` | `ScavTrap` inherits from `ClapTrap`, overrides its behaviour and adds `guardGate`. |
| `ex02` | `fragtrap_test` | `FragTrap` shares the same base but with different stats and `highFivesGuys`. |

## Build and run

Every exercise has its own Makefile and produces its own binary:

```bash
make -C ex00
./ex00/claptrap_test
```

`make fclean -C <exercise>` removes the binary again.

## Notes

- C++98, `-Wall -Wextra -Werror`.
- Attack and repair messages show which class actually handles the call.

## Author

**Arda Aycan** ([@EpicYamo](https://github.com/EpicYamo)).
