#include "function3.h"

// Updates score based on streak rules
int updateScore(char currentFlip, char previousFlip, int &streak) {
    if (currentFlip == previousFlip) {
        streak++;

        // Only award points once streak reaches 2 or more
        if (streak >= 2) {
            return 2;
        }
        return 0;
    }
    else {
        streak = 1; // reset streak
        return 0;
    }
}
