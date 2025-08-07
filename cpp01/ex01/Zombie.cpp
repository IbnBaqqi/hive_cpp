#include "Zombie.hpp"

Zombie::Zombie() : _name("") {
	std::cout << "Zombie was created with default constructor" << std::endl;
}

Zombie::Zombie(const std::string& name) : _name(name) {
	std::cout << _name << ": was created." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << ": was destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) {
	_name = name;
	std::cout << "Zombie was named: " << _name << std::endl;
}