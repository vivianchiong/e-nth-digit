#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfenv>

int main(int argc, char* const argv[]) {
    uint16_t digit;
    bool done = false;

    std::fesetround(FE_DOWNWARD);
    std::cout << std::fixed;

    do {
        std::cout << "Enter number of decimal places (max 15): ";
        std::cin >> digit;
        if (digit <= 15) {
            std::cout << std::setprecision(digit);
            std::cout << std::exp(1.0) << std::endl;
            done = true;
        }
    } while (!done);
}