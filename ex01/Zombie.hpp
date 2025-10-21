#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
    std::string name;

  public:
    Zombie(const std::string &newName);
    Zombie();
    ~Zombie(void);
    void announce(void);
    void setName(const std::string &newName);
};

Zombie *zombieHorde(int N, std::string name);

#endif
