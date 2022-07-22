#ifndef CLAPTRAP_H
#define CLAPTRAP_H


#include <string>

class ClapTrap {
protected:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int ap;
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(ClapTrap const &);
	ClapTrap& operator=(ClapTrap const &);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
