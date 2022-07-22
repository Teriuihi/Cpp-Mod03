#include <string>
#include <iostream>
#include "FragTrap.h"

FragTrap::FragTrap() {
	this->hp = 100;
	this->ep = 100;
	this->ap = 30;
	std::cout << "FragTrap [" << this->name << "] created with default Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->hp = 100;
	this->ep = 100;
	this->ap = 30;
	std::cout << "FragTrap [" << this->name << "] created with name assignment Constructor" << std::endl;
}

FragTrap::FragTrap(const ClapTrap &ct) {
	std::cout << "FragTrap [" << this->name << "] created with copy Constructor" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap [" << name << "] deconstructed" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap [" << name << "] wants a high five!" << std::endl;
}
