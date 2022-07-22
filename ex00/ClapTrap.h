#ifndef CLAPTRAP_H
#define CLAPTRAP_H


#include <string>

class ClapTrap {
private:
	unsigned int hp;
	unsigned int ep;
	unsigned int ap;
	std::string name;
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
