#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie {
 public:
  Zombie();
  Zombie(const std::string& name);
  Zombie(const Zombie& other) = delete;
  Zombie& operator=(const Zombie& other) = delete;
  ~Zombie();

  void announce(void);
  void setName(const std::string& name);

 private:
  std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif