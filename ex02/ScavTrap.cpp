#include <iostream>
#include "ScavTrap.hpp"

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

void ScavTrap::attack(const std::string &target) {
	if (hp == 0) {
		std::cout << "ScavTrap [" << name << "] wanted to attack but it's dead." << std::endl;
		return;
	}
	if (ep == 0) {
		std::cout << "ScavTrap [" << name
				  << "] tried to attack but has no energy left, attack failed..." << std::endl;
		return;
	}
	ep--;
	std::cout << "ScavTrap [" << name << "] attacked [" << target << "] for ["
			  << ap << "] damage!" << std::endl;
}
