# Lab 8.2 – Kickball Scoreboard Plan

Due **Dec 9**. 18 one-hour sessions. Submit **r1 around Dec 1**.
File name: `mjtlab101-8-2-r1.cpp` (r2, r3 for later submissions, max 3 per week)

**Start of each session:** tell Claude the session number and paste this file plus the current code.

---

## Schedule

| Week | Dates | Sessions |
|---|---|---|
| 1 | Nov 11–15 | 1–5 |
| 2 | Nov 16–22 | 6–10 |
| 3 | Nov 23–29 (Thanksgiving) | 11–14 |
| 4 | Nov 30–Dec 6 | 15–18, submit r1 ~Dec 1 |
| Buffer | Dec 7–9 | Fixes from her feedback |

---

## Sessions

- [x] **1** Opening screen: title, mascot prompts, toss (anything but H/V = H), menu → first 11 lines match the sample
- [ ] **2** Team banner, "Beginning of the top of inning # 1", status line → lines 12–15 match
- [ ] **3** Read a code, upper/lowercase, "Not a valid code" re-prompt, G quits → junk re-prompts, G ends program
- [ ] **4** Balls, strikes, pitch count, status line updates → b,b,s,s shows right counts
- [ ] **5** 3 strikes = out + next kicker, 4 balls = next kicker, count resets → matches sample lines 15–37
- [ ] **6** Foul = strike unless it would be strike 3 → F at 0, 1, 2 strikes correct
- [ ] **7** Ordinals (1st, 2nd, 3rd, 4th–9th), kicker 9 wraps to 1
- [ ] **8** K = next kicker, O = out, R = run (O/R don't change kicker or count) → matches sample lines 41–46
- [ ] **9** 3 outs ends the half, "Half Inning over"
- [ ] **10** Each team keeps its own kicker spot → top of 2nd starts at #5 like the sample
- [ ] **11** Switch halves: banner names swap, top/bottom text, toss winner always kicks TOP
- [ ] **12** Store runs per inning per team, plus totals
- [ ] **13** Scoreboard formatting with setw → matches sample character for character
- [ ] **14** Full 6-inning loop, whole game runs
- [ ] **15** Winner / "Tie Game", skip bottom of 6th if bottom team is ahead
- [ ] **16** Play again (anything but N/n), reset everything, re-ask names, NO title reprint
- [ ] **17** Replay her exact sample inputs, compare line by line
- [ ] **18** Final check: header comment (name, student #, semester), no infinite loops, no goto, file name, submit

---

## Key facts from her sample output

- **Toss winner kicks first, in the TOP** of the inning
- **Scoreboard always lists Home first**, then Visitor
- Status line before every pitch: `Inning Status   Kicker  # 1 Balls-0 Strikes-0 Outs-0 Runs-0`
- Prompt: `1st Kicker (Count of 1): ` with the count going up on S, B, F
- **K** → next kicker, count resets to 1
- **O / R** (after a K) → add out / run, kicker and count DON'T change
- 3 strikes → out + next kicker. 4 balls → next kicker, no run.
- Each team starts its next half with the kicker who was up at the 3rd out
- Half inning end:
  ```
  Half Inning over
  Home Team      0  2  1  0  1  0 total 4
  Battle Kicks
  Visitor Team   2  0  1  0  1  0 total 4
  Cool Kids
  ```
- End: "Tie Game" or winner, then ` Another game (Y/N)? ` → anything but N/n plays again
- New game re-asks names, doesn't reprint the title
- **G quits immediately**, no extra output

## Design decisions

- **G quitting:** use a `bool` flag (like `canceled`) checked in every loop condition so loops end naturally. Avoid `exit()` or break chains (could count as an "effective goto").
- Her rules: no intentional infinite loops, no goto, nothing outside the textbook sections covered in class.

---

## Progress notes

(Add a line here after each session: what got done, anything left hanging.)

- **Nov 11, Session 1 DONE.** Title, mascot prompts, toss, and menu match her sample.
  - Mike's wording choice: toss prompt is "Who won the toss (H/V)? " (not "Whom", on purpose).
  - Toss: anything but H/V defaults to H. `kickingteam = toss;` and `half = 'T';` (toss winner always kicks the top).
  - Removed the old test printouts (Visitor:, Home:, Toss result:, First team kicking:).
  - **Next: Session 2** — team banner, "Beginning of the top of inning # 1", status line.

### Code at end of Session 1
```cpp
//Michael Tackett CP 101 Fall Semester 2026 K0475835
//Lab 8.2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string visitorname;
    string homename;
    int inning = 1;
    int outs = 0;
    int balls = 0;
    int strikes = 0;
    int visitorkicker = 1;
    int homekicker = 1;
    int visitortotal = 0;
    int hometotal = 0;
    int visitorscore[6] = {0};
    int homescore[6] = {0};
    char toss;
    char kickingteam;
    char half;
    
    cout << "Kickball Tourney Bruin Da Bear's 2026" << endl;
    cout << "Scoreboard/Umpire's Assistant At Your Service" << endl;
    cout << endl;
    
    cout << "What is the mascot name for the Visiting Team? ";
    getline(cin, visitorname);
    
    cout << "What is the mascot name for the Home Team? ";
    getline(cin, homename);
           
    cout << "Who won the toss (H/V)? ";
    cin >> toss;
    if (toss == 'h') toss = 'H';
    if (toss == 'v') toss = 'V';    
    if (toss != 'H' && toss != 'V')
    {
        toss = 'H';
    }
      
    kickingteam = toss;
    half = 'T';
    
    cout << "  The Item Codes are as follows:" << endl;
    cout << "Code Description   Code  Description    Code Description" << endl;
    cout << " S     Strike       K      Kick          B     Ball" << endl;
    cout << " O     Out          F      Foul Ball     R     Run in" << endl;
    cout << "                    G      Game Canceled" << endl;

    return 0;
}
```
