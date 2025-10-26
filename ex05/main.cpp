
#include "Harl.hpp"
#include <string>

int main(void) {
    std::string level = "INFO";
    Harl harl;

    harl.complain(level);
    level = "DEBUG";
    harl.complain(level);
    level = "WARNING";
    harl.complain(level);
    level = "ERROR";
    harl.complain(level);
}
