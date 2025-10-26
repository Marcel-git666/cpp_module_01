#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
    lookupTable[0].levelName = "DEBUG";
    lookupTable[0].functionPtr = &Harl::debug;
    lookupTable[1].levelName = "INFO";
    lookupTable[1].functionPtr = &Harl::info;
    lookupTable[2].levelName = "WARNING";
    lookupTable[2].functionPtr = &Harl::warning;
    lookupTable[3].levelName = "ERROR";
    lookupTable[3].functionPtr = &Harl::error;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++) {
        if (level == lookupTable[i].levelName) {
            (this->*lookupTable[i].functionPtr)();
        }
    }
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup"
              << " burger. I really do!" << '\n';
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon "
              << "in my burger! If you did, I wouldn’t be asking for more!"
              << '\n';
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free."
              << "I’ve been coming for years, whereas you "
              << "started working here just last month." << '\n';
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << '\n';
}
