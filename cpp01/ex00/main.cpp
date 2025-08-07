#include <iostream>

#include "Zombie.hpp"

int main(void) {

  std::cout << "Testing constructor and destructor (stack):" << std::endl;
  {
    Zombie walker("Walker");
    walker.announce();
  }
  std::cout << "\n" << std::endl;

  std::cout << "Testing randomChump() function (stack):" << std::endl;
  { randomChump("Runner"); }
  std::cout << "\n" << std::endl;

  std::cout << "Testing newZombie() function (heap, raw pointer):" << std::endl;
  {
    Zombie* deathclaw = newZombie("Deathclaw");
    if (!deathclaw) {
      return 1;
    }
    deathclaw->announce();
    delete deathclaw;
  }
  std::cout << std::endl;
}