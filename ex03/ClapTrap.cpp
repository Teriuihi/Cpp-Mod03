#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hp(10), ep(10), ap(0) {
	std::cout << "ClapTrap [" << name << "] created with default Constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hp(10), ep(10), ap(0) {
	std::cout << "ClapTrap [" << this->name << "] created with name assignment Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp) : name(cp.name), hp(cp.hp), ep(cp.ep), ap(cp.ap) {
	*this = cp;
	std::cout << "ClapTrap [" << this->name << "] created with copy Constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp) {
	this->name = cp.name;
	this->hp = cp.hp;
	this->ep = cp.ap;
	this->ap = cp.ap;
	std::cout << "ClapTrap [" << this->name << "] created with assignment operator" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap [" << name << "] deconstructed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (hp == 0) {
		std::cout << "ClapTrap [" << name << "] wanted to attack but it's dead." << std::endl;
		return;
	}
	if (ep == 0) {
		std::cout << "ClapTrap [" << name
			<< "] tried to attack but has no energy left, attack failed..." << std::endl;
		return;
	}
	ep--;
	std::cout << "ClapTrap [" << name << "] attacked [" << target << "] for ["
		<< ap << "] damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp == 0) {
		std::cout << "ClapTrap [" << name
			<< "] was attacked but was already dead so it took no damage." << std::endl;
		return;
	}
	if (hp < amount)
		hp = 0;
	else if (hp != 0)
		hp -= amount;
	std::cout << "ClapTrap [" << name << "] took [" << amount << "] damage! hp down to: ["
		<< hp << "]." << (hp == 0 ? " ClapTrap died..." : "") << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hp == 0) {
		std::cout << "ClapTrap [" << name << "] wanted to repair itself but it's dead." << std::endl;
		return;
	}
	if (ep == 0) {
		std::cout << "ClapTrap [" << name
			<< "] tried to repair itself but has no energy left repair failed..." << std::endl;
		return;
	}
	ep--;
	hp += amount;
	std::cout << "ClapTrap [" << name << "] repaired itself for [" << amount << "]." << std::endl;
}
