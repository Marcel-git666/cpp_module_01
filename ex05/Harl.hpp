#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    struct HarlPair {
        std::string levelName;
        void (Harl::*functionPtr)(void);
    };

    HarlPair lookupTable[4];

  public:
    Harl();
    void complain(std::string level);
};

#endif
