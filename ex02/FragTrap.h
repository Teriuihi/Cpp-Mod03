#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string &name);
	FragTrap();
	FragTrap(const ClapTrap &ct);
	virtual ~FragTrap();
	void highFivesGuys(void);
};


#endif
