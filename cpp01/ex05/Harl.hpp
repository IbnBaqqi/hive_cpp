#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define TYPE_COUNT 4

class Harl {
 public:
  Harl();
  Harl(const Harl& other) = delete;
  Harl& operator=(const Harl& other) = delete;
  ~Harl();

  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void (Harl::*_complaints[TYPE_COUNT])();
  std::string _types[TYPE_COUNT];
};

#endif