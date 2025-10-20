#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &newName) : name(newName) {}

Zombie::~Zombie(void) { std::cout << name << '\n'; }
void Zombie::announce(void) { std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }
