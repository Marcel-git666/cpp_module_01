
#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    Harl harl;

    if (argc != 2) {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return 1;
    }

    std::string level = argv[1];

    int levelNum = -1;
    if (level == "DEBUG")
        levelNum = 0;
    else if (level == "INFO")
        levelNum = 1;
    else if (level == "WARNING")
        levelNum = 2;
    else if (level == "ERROR")
        levelNum = 3;
    switch (levelNum) {
    case 0:
        harl.complain("DEBUG");
    case 1:
        harl.complain("INFO");
    case 2:
        harl.complain("WARNING");
    case 3:
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << '\n';
    }
}
