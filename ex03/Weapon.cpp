#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string initialType) : type(initialType) {}
const std::string &Weapon::getType(void) const { return type; }
void Weapon::setType(std::string newType) { type = newType; }
