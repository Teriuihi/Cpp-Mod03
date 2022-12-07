#include "DiamondTrap.hpp"

int main() {
	ClapTrap def = ClapTrap();
	ScavTrap john = ScavTrap("John");
	FragTrap emily = FragTrap("Emily");
	DiamondTrap dave = DiamondTrap("Dave");

	def.attack("John");
	john.takeDamage(0);
	john.beRepaired(10);
	def.attack("John");
	john.takeDamage(0);
	john.attack("default");
	def.takeDamage(20);
	john.guardGate();
	def.beRepaired(10);
	emily.highFivesGuys();
	emily.attack("John");
	john.takeDamage(30);
	john.beRepaired(20);
	emily.beRepaired(10);
	emily.highFivesGuys();
	john.attack("Emily");
	emily.takeDamage(20);
	dave.whoAmI();
	dave.attack("John");
	john.takeDamage(30);
	emily.attack("Dave");
	dave.takeDamage(30);
}