#include "Zombie.hpp"

int main(void) {
    const int zombie_count = 10;
    Zombie *horde = zombieHorde(zombie_count, "Srk");

    for (int i = 0; i < zombie_count; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
