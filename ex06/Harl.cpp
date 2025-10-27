#include "Harl.hpp"
#include <iostream>

Harl::HarlPair Harl::lookupTable[4] = {{"DEBUG", &Harl::debug},
                                       {"INFO", &Harl::info},
                                       {"WARNING", &Harl::warning},
                                       {"ERROR", &Harl::error}};

Harl::Harl() {}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++) {
        if (level == lookupTable[i].levelName) {
            (this->*lookupTable[i].functionPtr)();
        }
    }
}

void Harl::debug() {
    std::cout << "[ DEBUG ]" << '\n';
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup"
              << " burger.\nI really do!" << '\n';
}

void Harl::info() {
    std::cout << "[ INFO ]" << '\n';
    std::cout << "I cannot believe adding extra bacon costs more money. \n"
              << "You didn’t put enough bacon in my burger!\n"
              << "If you did, I wouldn’t be asking for more!" << '\n';
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << '\n';
    std::cout << "I think I deserve to have some extra bacon for free.\n"
              << "I’ve been coming for years, whereas you "
              << "started working here just last month." << '\n';
}

void Harl::error() {
    std::cout << "[ ERROR ]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << '\n';
}
