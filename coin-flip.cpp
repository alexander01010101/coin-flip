// write a quick program that simulates flipping a coin 100 times and counts the number of heads and tails
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // seed the random number generator
    std::srand(std::time(0));

    int heads = 0;
    int tails = 0;

    for (int i = 0; i < 100; ++i) {
        // simulate flipping a coin (0 for heads, 1 for tails)
        int flip = std::rand() % 2;

        if (flip == 0) {
            ++heads;
        } else {
            ++tails;
        }
    }

    std::cout << "Number of heads: " << heads << std::endl;
    std::cout << "Number of tails: " << tails << std::endl;

    return 0;
};
