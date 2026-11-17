# CP101 Lab Finder
In the order a program gets built: top to bottom.

## 1. Asking for input
| If you need | It is in |
|---|---|
| Ask "how many ___?" | `lab11_1.cpp` |
| Re-ask until valid | `lab6b.cpp` |
| Too big? Cap it at the max | `lab6c.cpp` |
| Read a name with spaces | `lab4.1b.cpp` |
| Read several numbers on one line | `lab10b.cpp` |

## 2. Filling an array
| If you need | It is in |
|---|---|
| Ask for each one and store it in an array | `lab11_1.cpp` (fill loop, swap `rand` for `cin`) |
| Fill with random numbers 1–100 | `lab11_1.cpp` |
| Repeat a set number of times | `lab6a.cpp` |

## 3. Functions
| If you need | It is in |
|---|---|
| Function that asks for a value and checks it | `lab8_1a.cpp` (`getHeight`) |
| Function that calculates and returns | `lab8_1a.cpp` (`getArea`) |
| Function that only prints (void) | `lab8_1a.cpp` (`displayData`) |
| Function that takes an array | `lab10c.cpp` |
| Pass a value into a function | `lab8-1b.cpp` |
| Same function, different numbers | `lab8_1c.cpp` |
| Same name, different count | `lab9_1a.cpp` |
| Default values | `lab9_1b.cpp` |
| Same name, different type | `lab9_1c.cpp` |
| Function changes the original (&) | `lab9_1d.cpp` |

## 4. Working with the numbers
| If you need | It is in |
|---|---|
| Add up a total / average | `lab7.2a.cpp` |
| Sort lowest to highest | `lab11_1.cpp` |
| Highest / lowest after sorting | `lab11_1.cpp` |
| Smallest / largest without sorting | `lab10a.cpp` |
| Search: is it in the list? | `lab11_2.cpp` |
| Division that keeps decimals | `lab3d.cpp` |

## 5. Decisions
| If you need | It is in |
|---|---|
| Either / both conditions (`||` / `&&`) | `lab5a.cpp` |
| Pick by letter, then decide inside | `lab5b.cpp` |
| Low / average / high ranges | `lab5c.cpp` |

## 6. Printing results
| If you need | It is in |
|---|---|
| Print the array ascending / descending | `lab11_1.cpp` |
| Two decimals / line up columns | `lab4.1c.cpp` |
| Print 034 instead of 34 | `lab11_2.cpp` |
| Print `"` inside text | `lab5b.cpp` |

## 7. Repeating the whole program
| If you need | It is in |
|---|---|
| Do it again (Y/N) | `lab10b.cpp` |
| Loop inside a loop | `lab10d.cpp` |

## Other
| If you need | It is in |
|---|---|
| Files: write / write report / read numbers / read lines | `lab7a` / `lab7b` / `lab7.2a` / `lab7.2b` |
| printf / scanf | `lab3a.cpp`, `lab3c.cpp` |
| Pointers | `lab12a.cpp`, `lab12b.cpp` |
| 2D / 3D array | `lab10d.cpp` |

---

# COPY RECIPES (in build order)

**Before every variable, ask: ONE number or a LIST?** One number → `int count;` List → `int books[8];`

### 1. Header
Type first: `//Michael Tackett CP 101 Fall Semester 2026 K0475835`

### 2. "How many ___ (2–8)?" with re-ask
- Copy the first do-while in `lab11_1.cpp` (the "How many numbers" one)
- Change: the question, the 2 and 18 limits (in the `if` AND the `while`), the error message
- The variable is `count`, a plain `int`

### 3. Function that asks for one value and checks it
- Copy `getHeight` from `lab8_1a.cpp` (from `float getHeight()` to its last `}`), paste BELOW `main`
- Rename `getHeight` → `getBooks`, `height` → `books`
- Change `float` to `int` if the values are whole numbers
- Add the person's number in the `( )`: `int getBooks(int student)`
- Put it in the question: `cout << "Enter books read by student " << student << ": ";`
- Change the limits and the error message

### 4. Prototype
- Copy the function's first line, add `;`, paste ABOVE `main`
- `int getBooks(int student)` → `int getBooks(int student);`

### 5. Fill the array using the function
- Copy the fill loop from `lab11_1.cpp` (the `for` with `rand()`)
- Replace the `rand` line with a call to your function:
  `books[index] = getBooks(index + 1);`
- `index + 1` because slots start at 0, people start at 1

### 6. Sort
- Copy everything between `//selection sort begin` and `//selection sort end` in `lab11_1.cpp`
- Change every `numbers` to your array name
- Needs `int smallest; int temp; int search;` declared in `main`

### 7. Highest / lowest (after sorting)
- Highest: `books[count - 1]`
- Lowest: `books[0]`

### 8. Function that totals the array
- Array in the `( )` like `lab10c.cpp`: `int totalBooks(const int books[], int count)`
- Inside: the `sum = 0` loop from `lab7.2a.cpp`, but add `books[index]` instead of reading a file
- End with `return sum;`
- Call it: `total = totalBooks(books, count);`

### 9. Average with decimals
- Ints divide without decimals (see `lab3d.cpp`). Use: `average = (float)total / count;`

### 10. Print the array on one line
- Copy the "Ascending Order" print loop from `lab11_1.cpp`, rename `numbers`

### 11. Two decimals
- `#include <iomanip>` at top, then `cout << fixed << setprecision(2);` once before printing

### 12. Is it in the list? (search)
- Copy the `found = false;` + loop from `lab11_2.cpp`

### 13. Price/category by ranges
- Copy the `if / else if / else` from `lab5c.cpp`, change the numbers

### 14. Do it again (Y/N)
- Copy the outer do-while from `lab10b.cpp`

---

# COMPILE TROUBLE
- Error points at a line that looks fine → check the line ABOVE for a missing `;`
- `do { } while (...)` ALWAYS ends with `;`
- Compile after EVERY recipe, not at the end
