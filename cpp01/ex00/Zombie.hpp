#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie {
 public:
  Zombie() = delete;
  Zombie(const std::string& name);
  Zombie(const Zombie& other) = delete;
  Zombie& operator=(const Zombie& other) = delete;
  ~Zombie();

  void announce(void);

 private:
  std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif