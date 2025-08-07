#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie temporary(name);
  temporary.announce();
}