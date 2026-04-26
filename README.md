Coin Streak: The probability Challenge 

Team members: 

- Partner 1: Steve Gonzalez
EMPLID: 24689255
Github: 

- Partner 2: 
EMPiD: 
Github:




Game Description:


Coin Streak is a modular terminal based game designed to simulate the statistical proability of the landing heads or tails. Using C++ random number generation system, the program stimulates a series of coin flips where each outcome is determined with a 50/50 probability.
The game focuses on the concept of "streaks". Rather than simply counting total heads or tails,the program monitors the relationship between the current flip and the previous one. This project demonstrates the practical application of modular programming by separating the generation of data, the mathematical scoring logic, and the user interface into distinct, reusable components.


Rules:

-The flip. Each round, the program generates a random number (0 or 1). The 0 is assigned as Heads(H) and 1 is assigned as Tails(T).

- Constructive requirements. No points are arwarded for a single isolated flip. to begin earning points, the player must land the same side of the coin at least twice in a row.

- continous streaks. Once a streak is established, every subsequent flip matches the previous one continues the streak and adds to the total score. 

- The break. As soon as the coin lands on the opposite side, the current streak ends, the streak counter resets to 1, and no points are awarded for that turn. 

Scoring 

game uses a "Streak Bonus" scheme to reward consecutive results 

- First flip of a side: 0 points, starts the streak.

- Match found: if the current flip matches the previous flip, the player earns + 5 points. 

Example #1: A sequence of H H H results in 10 points, 0 for the first, 5 for the second, 5 for the third.

- Example 2: A sequence of  H T H results in 0 points, as nop consecutive matches occured.


Who's Doing What


Team members: 

Steve Gonzalez: 

Backend logic, coding part 
check errors
completed Read me file

Jimena Perez: 

UI creation
Backend as well, coding part
Checks for any errors

Both of us check for any errors, collaborated on the logic within main.cpp in order to ensure the state transition from the current flip and last flip is accurate.
