#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(const std::string &name);
	FragTrap();
	FragTrap(const FragTrap &ft);
	virtual ~FragTrap();
	void highFivesGuys(void);
};


#endif
