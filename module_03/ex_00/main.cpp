#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.attack("ennemy");
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}
