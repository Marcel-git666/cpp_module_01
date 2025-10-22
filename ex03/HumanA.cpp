#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(const std::string &name, const Weapon &weapon)
    : name(name), weapon(weapon) {}

void HumanA::attack(void) const {
    std::cout << name << " attacks with their " << weapon.getType() << '\n';
}
