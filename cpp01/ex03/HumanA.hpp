#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA() = delete;
  HumanA(const std::string& name, Weapon& weapon);
  HumanA(const HumanA& other) = delete;
  HumanA& operator=(const HumanA& other) = delete;
  ~HumanA();

  void attack(void);

 private:
  std::string _name;
  Weapon& _weapon;
};

#endif