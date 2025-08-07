#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB() = delete;
  HumanB(const std::string& name);
  HumanB(const HumanB& other) = delete;
  HumanB& operator=(const HumanB& other) = delete;
  ~HumanB();

  void attack(void);
  void setWeapon(Weapon& weapon);

 private:
  std::string _name;
  Weapon* _weapon;
};

#endif