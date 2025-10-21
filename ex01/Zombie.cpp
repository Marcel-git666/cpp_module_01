#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &newName) : name(newName) {}
Zombie::Zombie() {}
Zombie::~Zombie(void) { std::cout << "Zombie " << name << " was destroyed.\n"; }
void Zombie::announce(void) { std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }
void Zombie::setName(const std::string &newName) { this->name = newName; }
