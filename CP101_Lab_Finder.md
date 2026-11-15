# CP101 Lab Finder: "what I need" → "which file has it"

All files are in `~/Documents/School/CP_101`.

## BEFORE WRITING ANYTHING
- Read the WHOLE exam first, **bottom of the page too**
- NO global variables: every variable goes inside main's `{ }`
- No goto. No infinite loops.
- Watch the clock: a half-done program that follows the rules beats a finished one that breaks one

---

## Input / Output
| What I need | File | Look for |
|---|---|---|
| Print a number inside text, printf style | `lab3a.cpp` | `printf("Here is line %d", 1);` |
| Read input with scanf (needs `&`) | `lab3c.cpp` | `scanf("%d", &adults);` |
| Read a name WITH SPACES (string) | `lab4.1b.cpp` | `getline(cin, town);` |
| Money with 2 decimals | `lab3b.cpp` / `lab4.1c.cpp` | `fixed << setprecision(2)` |
| Line up columns | `lab4.1c.cpp` (loan) or `lab6a.cpp` (parking) | `setw`, `left`, `right` |
| Print a `"` inside text | `lab5b.cpp` | `\"Bruin\"` |
| Division that keeps the decimal | `lab3d.cpp` | `(9.0/5)` |
| Print 034 instead of 34 | `lab11_2.cpp` | `setw(3) << setfill('0')` |

## Decisions (if / else)
| What I need | File | Look for |
|---|---|---|
| Either condition OK (`||`) / both needed (`&&`) | `lab5a.cpp` | magic date `if` |
| Pick by letter, then decide inside | `lab5b.cpp` | sprinkler nested `if` |
| Low / average / high ranges | `lab5c.cpp` | fuel `else if` |

## Loops
| What I need | File | Swap these |
|---|---|---|
| Repeat a set number of times | `lab6a.cpp` (parking) | start, stop, what's inside |
| Keep asking until valid | `lab6b.cpp` (magic date) | question, variable, bad condition, error msg |
| Too big? Just cap it | `lab6c.cpp` (fence) | `if (x > 12) x = 12;` |
| Do it again (Y/N) | `lab10b.cpp` (determinant) or `lab6c.cpp` | the question |
| Add up a total | `lab7.2a.cpp` (file read) | `sum = 0;` then `sum = sum + num;` |
| Loop inside a loop | `lab10d.cpp` (3D array) | how many levels |

## Files
| What I need | File |
|---|---|
| Write numbers to a file | `lab7a.cpp` (`savefile <<`) |
| Read a set amount of numbers from a file | `lab7.2a.cpp` |
| Write a report to a file | `lab7b.cpp` (box office → MJTmovie.dat) |
| Read every line, count unknown | `lab7.2b.cpp` (`while (getline(readfile, line))`) |

## Functions
| What I need | File | Look for |
|---|---|---|
| Function that does math and returns it | `lab8_1a.cpp` | `getArea` |
| Function that asks + validates + returns | `lab8_1a.cpp` | `getHeight` |
| Function that only prints (`void`) | `lab8_1a.cpp` | `displayData` |
| Pass a value in (copy) | `lab8-1b.cpp` | `celtofar(Celsius)` |
| Same math, different numbers | `lab8_1c.cpp` | `paymentCalc` |
| Same name, different number of values | `lab9_1a.cpp` | `thearea` |
| Default values | `lab9_1b.cpp` | `volumecalc` |
| Same name, different types | `lab9_1c.cpp` | `cubeit` (use `2.5f` for float) |
| Function CHANGES main's variable (`&`) | `lab9_1d.cpp` | `swapnsum` |
| Pass an array to a function | `lab10c.cpp` | `const` = print only |

**Remember:** the function gets a COPY unless there's `&` or `*`. `return` is the only thing that comes back.

## Arrays / Sorting / Searching
| What I need | File | Look for |
|---|---|---|
| Ask how many (2–18), fill with random 1–100 | `lab11_1.cpp` | `rand() % 100 + 1` |
| Find smallest/largest AND its position | `lab10a.cpp` | flip `<` to `>` for largest |
| Sort, highest/lowest, ascending/descending | `lab11_1.cpp` | highest = `[count-1]`, lowest = `[0]` |
| Is this number in the list? | `lab11_2.cpp` | `found = false;` then loop |
| Read several numbers on one line | `lab10b.cpp` | `cin >> row1[0] >> row1[1] >> row1[2];` |
| 2D / 3D arrays | `lab10d.cpp` | three nested `for` loops |

**Remember:** slots start at 0. Last slot is `count - 1`.

## Pointers
| What I need | File | Look for |
|---|---|---|
| Make a pointer, print address vs value | `lab12a.cpp` | `pts` = address, `*pts` = value |
| Distance between two array slots | `lab12a.cpp` | `pxb - pxa` |
| Change main's variables through pointers | `lab12b.cpp` | `*a *= 7;` |
