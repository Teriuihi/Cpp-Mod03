#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(const std::string &name);
	ScavTrap();
	ScavTrap(const ScavTrap &st);
	void guardGate();
	virtual ~ScavTrap();
};


#endif
