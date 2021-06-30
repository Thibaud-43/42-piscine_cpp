#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char const *argv[])
{
	FragTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.attack("ennemy");
	tibo.highFivesGuys();
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}
