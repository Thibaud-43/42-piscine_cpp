#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(int argc, char const *argv[])
{
	DiamondTrap	tibo("tibo");
	
	std::cout << tibo.getName() << std::endl;
	std::cout << tibo.ClapTrap::getName() << std::endl;
	std::cout << tibo.getHitPoints() << std::endl;
	std::cout << tibo.getEnergyPoints() << std::endl;
	std::cout << tibo.getAttackDammage() << std::endl;
	tibo.guardGate();
	tibo.highFivesGuys();
	tibo.whoAmI();
	tibo.attack("ennemy");
	return 0;
}
