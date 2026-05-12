#include <iostream>
#include "function2.h"

using namespace std;

// Asks the player how many flips to simulate
int getNumberOfFlips() {
    int flips;
    cout << "How many coin flips do you want to simulate? ";
    cin >> flips;
    return flips;
}
