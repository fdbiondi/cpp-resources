#include <ctime>
#include <iostream>

int main() {
    // Exercise 3 - dice
    const short minVal = 1;
    const short maxVal = 6;

    srand(time(0));
    int diceValue1 = (rand() % (maxVal - minVal + 1)) + minVal;
    int diceValue2 = (rand() % (maxVal - minVal + 1)) + minVal;

    std::cout << diceValue1 << ", " << diceValue2 << std::endl;

    return 0;
}
