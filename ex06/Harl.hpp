#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
  private:
    void debug();
    void info();
    void warning();
    void error();

    struct HarlPair {
        std::string levelName;
        void (Harl::*functionPtr)();
    };

    static HarlPair lookupTable[4];

  public:
    Harl();
    void complain(std::string level);
};

#endif
