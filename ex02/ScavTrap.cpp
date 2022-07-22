#include <iostream>
#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap() {
	this->hp = 100;
	this->ep = 50;
	this->ap = 20;
	std::cout << "ScavTrap [" << this->name << "] created with default Constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->hp = 100;
	this->ep = 50;
	this->ap = 20;
	std::cout << "ScavTrap [" << this->name << "] created with name assignment Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st) {
	*this = st;
	std::cout << "ScavTrap [" << this->name << "] created with copy Constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap [" << name << "] deconstructed" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap [" << name << "] is now in guard gate mode." << std::endl;
}
