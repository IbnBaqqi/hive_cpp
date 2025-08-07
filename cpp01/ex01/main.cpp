#include <iostream>

#include "Zombie.hpp"

#ifndef COLORS
#define COLORS
#define BLUE "\033[34m"
#define BOLDGREEN "\033[1m\033[32m"
#define RESET "\033[0m"
#endif  // COLORS

int main(void) {

  std::cout << "Testing zombieHorde() function (heap, array of raw pointers):" << std::endl;
  {
    int amount = 5;
    Zombie* horde = zombieHorde(amount, "Walker");
    if (!horde) {
      return 1;
    }

    for (int i = 0; i < amount; i++) {
      std::cout << "[" << i << "]: ";
      horde[i].announce();
    }

    delete[] horde;
  }
  std::cout << std::endl;
}