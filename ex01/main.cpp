#include "ScavTrap.h"

int main() {
	ClapTrap def = ClapTrap();
	ScavTrap john = ScavTrap("John");

	def.attack("John");
	john.takeDamage(0);
	john.beRepaired(10);
	def.attack("John");
	john.takeDamage(0);
	john.attack("default");
	def.takeDamage(20);
	john.guardGate();
	def.beRepaired(10);
}