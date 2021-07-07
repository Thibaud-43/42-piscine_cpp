#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	ScavTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.attack("ennemy");
	tibo.guardGate();
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}
