#include "Weapon.hpp"
#include <string>

class HumanB {
  private:
    std::string name;
    const Weapon *weapon;

  public:
    HumanB(const std::string &name);
    void setWeapon(Weapon &weapon);
    void attack(void);
};
