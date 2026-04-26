#include "streak_manager.h"

int updateStreakAndScore(char current, char previous, int &streak) {
    if (current == previous) {
        streak++;
        // We award 5 points for every match in a streak
        return 5; 
    } else {
        streak = 1; // Reset streak to 1 because the side changed
        return 0;
    }
}