# CP 101 Notes

Plain-English notes on everything through week 8, and which lab I did each thing in.

---

## Getting set up
- Every program starts with my comment line (name, student #, semester), then the includes, then `using namespace std;`, then `main()`.
- **iostream** is for cout and cin. **iomanip** is for setw, fixed, and setprecision. **cmath** is for pow and sqrt. **fstream** is for files.
- If the compiler says something "was not declared," the first thing to check is a missing include.
- Never write `std::` since I already have `using namespace std;`.

---

## Variables
- **int** is for whole numbers (counts, years, hours).
- **float** is for decimals (money, rates, temperatures).
- **char** is one character, in single quotes, like 'Y'.
- **string** is text, in double quotes. Needs getline if it can have spaces.
- **bool** is true or false. Used as a "flag."
- A variable only exists inside the curly braces it was declared in.
- A variable that's never given a value holds garbage.

---

## Input and output
- **cout** prints to the screen. **cin** reads from the keyboard.
- Always print a question (a prompt) before every cin.
- cin stops reading at a space. For anything with spaces (like a movie name), use **getline**. → *lab7b*
- If getline gets skipped after a cin, put cin.ignore() before it.
- **endl** and **\n** both start a new line.
- To print a quote mark inside text, use backslash-quote. To print a backslash, use two backslashes.

---

## Formatting numbers
- **fixed** plus **setprecision(2)** gives 2 decimals. Set it **once**, before the prints. It stays on. → *lab6a, lab4.1c*
- **setw(n)** makes the next thing take up n spaces, right-aligned. It only affects the **very next** value, so it has to be repeated. → *lab6a (parking), lab4.1c (loan table), lab6c (fence sides)*
- **left** and **right** change the alignment and stay on until changed. → *lab4.1c*
- She grades output on an **exact match**: spaces, capitals, punctuation, blank lines.

---

## Math
- Dividing two ints throws away the decimal (7 / 2 = 3). Make one of them a decimal (like 9.0) to get a real answer. → *lab3d (temperature)*
- **%** gives the remainder. "x % 2 equals 0" means even. → *lab6c (alternating fence rows)*
- There's no ^ for powers in C++. Use **pow** (needs cmath). → *lab4.1c (loan)*
- **+=** adds to what's already there (sum += num is sum = sum + num).
- **x++** uses x, then adds 1. **++x** adds 1, then uses x.

---

## Decisions (if / else)
- **if** runs code only when something is true. **else** is what happens otherwise.
- **else if** checks another condition when the first was false. → *lab5b (golf sprinkler, checking F/R/G)*
- **&&** means AND (both must be true). **||** means OR (either one).
- Checking upper and lower case: region == 'F' **||** region == 'f'. → *lab5b*
- Checking a range: x > 1 && x < 10. You can't write 1 < x < 10.
- **==** compares. A single **=** assigns. Mixing them up is a classic bug.
- Never put a semicolon right after the if's parentheses.
- If two checks lead to the same result, combine them with || instead of checking twice. She flags that. → *lab5b*
- Magic date and gas mileage were also decision programs. → *lab5a, lab5c*

---

## Loops
**Which loop to use:**
- **for** when you know how many times (count 1 to 10). → *lab6a (parking), lab7a (5 numbers)*
- **do-while** when it has to run at least once, which is perfect for "keep asking until the input is good." → *lab6b (magic date), lab8.1 A and C*
- **while** when it might not need to run at all, like reading a file until it ends. → *lab7.2b*

**Input validation (her favorite):** ask, read, if it's bad print an error, and repeat while it's bad. The bad-input condition shows up twice: once in the if (for the message) and once in the while (to repeat). That's how her own slide does it. → *lab6b, lab8.1 A and C*

**Repeat the whole program:** wrap everything in an outer do-while that ends with "build another (Y/N)?" → *lab6c (fence)*

**Loop inside a loop:** the inner loop runs all the way through for every single pass of the outer one. Total runs = outer times inner. → *lab6c (fence)*

**Running total:** start the total at 0 **before** the loop, add to it **inside** the loop, and do the average **after** the loop. → *lab7.2a*

**Other loop facts:**
- A do-while ends with a semicolon after the while.
- A counter declared in the for's parentheses only exists inside the loop.
- **break** quits the loop entirely. **continue** skips to the next pass.
- **Intentional infinite loops = 0 on the program.** Every loop needs a way to end on its own.

---

## Files
**The 5 steps:** include fstream → declare the file variable → open it → read or write → **ALWAYS close it**.

- **ofstream** writes to a file. Use it just like cout. → *lab7a (MJT1.dat), lab7b (MJTmovie.dat)*
- **ifstream** reads from a file. Use it just like cin. → *lab7.2a*
- Formatting (fixed, setprecision) goes on the **file** variable when writing to a file, and on **cout** when printing to the screen.
- Opening a file to write **erases** what was in it.
- With no path, the file goes in the same folder as the program.
- In a path, backslashes have to be doubled.
- To read a file of **any** length, loop "while getline still gets a line." It stops on its own at the end. → *lab7.2b (file.txt)*
- Use **readfile** / **savefile** style names so it's obvious which way the file goes.

---

## Functions
**Why:** write something once and use it as many times as needed. Then main() reads like a summary of the whole program.

**Every function shows up in 3 places:**
1. **Prototype**, at the top above main(). It ends with a **semicolon**. It tells the compiler the function exists.
2. **Call**, inside main(). This is where it gets used. **No types** in the parentheses, just the values or variables being handed over.
3. **Definition**, below main(). Same first line as the prototype but **no semicolon**, then the braces with the actual code.

**Things to remember:**
- What goes in front of the name is what it hands back (float, int). **void** means it hands back nothing. → *lab8.1 A (displayData)*
- **return** hands the answer back and ends the function.
- A function returns **one** value at most.
- Values get passed **in order**. The first value fills the first slot, and so on. The names don't have to match.
- A function **can't see** main()'s variables. It only knows what's in its parentheses and what's declared inside it. → *lab8.1 C (that's why the slot was named rate)*
- If the function asks the user itself, its parentheses are empty. → *lab8.1 A (getHeight, getBase)*
- If main() already has the number, it passes it in through the parentheses. → *lab8.1 B (celtofar, celtokel)*
- Same formula needed twice? One function, called twice with different values. → *lab8.1 C (monthly and bimonthly payment)*
- **Pass by value:** the function gets a **copy**. Changing it inside doesn't change the original.
- Every parameter needs its own type, even if they're all the same type.

---

## When something breaks
- **"not declared"** → missing include, typo, capital letter mismatch, missing prototype, or the variable is outside its braces.
- **Loop never ends** → the thing the loop checks never changes inside the loop.
- **if always runs** → there's a semicolon right after the if's parentheses.
- **Wrong decimals** → forgot fixed/setprecision, or int division chopped it.
- **Output doesn't match hers** → compare line by line: spaces, capitals, blank lines.
- **Getting stuck** → get one piece running first, then add the next. Compile often.

---

## Her rules
- No goto (0 on an exam).
- No intentional infinite loops (0, no resubmit).
- No `std::`, no `auto`.
- Braces lined up, code indented inside them.
