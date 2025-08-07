#include <iostream>

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void) {
  {
    Weapon club = Weapon("gun");
    HumanA jetLi("Jet Li", club);
    jetLi.attack();
    club.setType("AK47");
    jetLi.attack();
  }
  std::cout << std::endl;
  {
    Weapon club = Weapon("gun");
    HumanB theRock("The Rock");
    theRock.attack();
    theRock.setWeapon(club);
    theRock.attack();
    club.setType("AK47");
    theRock.attack();
  }
  return 0;
}