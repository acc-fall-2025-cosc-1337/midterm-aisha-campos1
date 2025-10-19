//
#include "question4.h"
#include <random>
bool test_config()
{
    return true;
}

int roll_dice() {
    static std::random_device rd;  // obtain a random number from hardware
    static std::mt19937 eng(rd()); // seed the generator
    static std::uniform_int_distribution<> distr(1, 6); // define the range

    return distr(eng);
}