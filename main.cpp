#include <iostream>
#include <ctime>
#include <cstdlib>

// Include your custom headers
#include "coin_generator.h"
#include "streak_manager.h"
#include "ui_manager.h"

using namespace std;

int main() {
    srand(time(0)); // Seed once at the start

    int totalRounds{0};
    cout << "How many rounds do you want to play? ";
    cin >> totalRounds;

    char currentFlip, lastFlip = ' ';
    int totalScore{0};
    int currentStreak{0};

    cout << "--- COIN STREAK GAME START ---\n" << endl;

    for (int i = 1; i <= totalRounds; i++) {
        char answer;
        cout << "Press f to flip coin #" << i << ": ";
        cin >> answer;

        currentFlip = flipCoin();

        if (i == 1) {
            currentStreak = 1;
            printFlipResult(i, currentFlip, 0, totalScore);
        } else {
            int pointsEarned = updateStreakAndScore(currentFlip, lastFlip, currentStreak);
            totalScore += pointsEarned;
            printFlipResult(i, currentFlip, pointsEarned, totalScore);
        }

        lastFlip = currentFlip;
    }

    cout << "\nGAME OVER!" << endl;
    cout << "Final Streak Score: " << totalScore << endl;

    return 0;
}