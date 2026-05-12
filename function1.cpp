#include <cstdlib>
#include "function1.h"

// Returns 'H' for heads or 'T' for tails
char flipCoin() {
    int num = rand() % 2; // 0 or 1

    if (num == 0)
        return 'H';
    else
        return 'T';
}
