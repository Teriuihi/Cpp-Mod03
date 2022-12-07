#include "ClapTrap.hpp"

int main() {
	ClapTrap def = ClapTrap();
	ClapTrap john = ClapTrap("John");

	def.attack("John");
	john.takeDamage(0);
	john.beRepaired(1);
	def.beRepaired(1);
	john.attack("default");
	def.takeDamage(0);
}