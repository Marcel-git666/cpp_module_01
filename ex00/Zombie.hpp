#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie(const std::string &newName);
  ~Zombie(void);
  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(const std::string &);

#endif
