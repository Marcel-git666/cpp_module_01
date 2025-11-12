#include "Zombie.hpp"

int main(void) {
    randomChump("Stack Zombak");
    Zombie *heapZombie = newZombie("Heap Zombak");
    heapZombie->announce();
    delete heapZombie;
    return 0;
}
