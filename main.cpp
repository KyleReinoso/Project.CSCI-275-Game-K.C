#include <iostream>
#include <cstdlib>
#include <ctime>
#include "function1.h"
#include "function2.h"
#include "function3.h"

using namespace std;

int main() {
    srand(time(0)); // seed random generator

    cout << "Welcome to the Coin Flip Streak Game!\n\n";

    int totalFlips = getNumberOfFlips();
    int score = 0;

    char previousFlip = 'X'; // placeholder (no previous flip yet)
    int streak = 1;

    cout << "\nFlips: ";

    for (int i = 0; i < totalFlips; i++) {
        char currentFlip = flipCoin();
        cout << currentFlip;

        score += updateScore(currentFlip, previousFlip, streak);

        previousFlip = currentFlip;
    }

    cout << "\n\nFinal Score: " << score << " points\n";

    return 0;
}
