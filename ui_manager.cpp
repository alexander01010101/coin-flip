#include "ui_manager.h"
#include <iostream>

using namespace std;

void printFlipResult(int round, char side, int points, int total) {
    cout << "Flip #" << round << ": [" << side << "]";
    if (points > 0) {
        cout << " -> STREAK BONUS! +5";
    }
    cout << " | Current Total: " << total << endl;
}
