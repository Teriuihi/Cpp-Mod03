#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H


#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: virtual public ClapTrap, public ScavTrap, public FragTrap {
private:
	std::string name;
public:
	DiamondTrap(const std::string &name);
	DiamondTrap();
	DiamondTrap(const DiamondTrap &ct);
	virtual ~DiamondTrap();
	void whoAmI();
	void attack(const std::string& target);
};


#endif
