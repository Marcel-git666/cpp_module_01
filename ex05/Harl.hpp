#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
  private:
    void debug(void);

  public:
    Harl();
    void complain(std::string level);
};

#endif
