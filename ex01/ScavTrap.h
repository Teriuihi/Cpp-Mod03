#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const std::string &name);

	ScavTrap();

	ScavTrap(const ClapTrap &ct);

	void guardGate();

	virtual ~ScavTrap();
};


#endif
