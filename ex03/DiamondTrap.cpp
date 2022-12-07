#include <iostream>
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) :
	ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name") {
	this->name = name;
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	ap = FragTrap::ap;
	std::cout << "DiamondTrap [" << this->name << "] created with name assignment Constructor" << std::endl;
}

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap [" << this->name << "] created with default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ct) : ClapTrap(ct), ScavTrap(ct), FragTrap(ct) {
	std::cout << "DiamondTrap [" << this->name << "] created with copy Constructor" << std::endl;
	*this = ct;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap [" << name << "] deconstructed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap says \"My own name is: " << name << "\"" << std::endl
		<< "DiamondTrap says \"My ClapTrap name is " << ClapTrap::name << "\"" << std::endl;
}