#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " is alive !" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDammage(30);

}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FragTrap " << getName() << " is alive !" << std::endl;

}

FragTrap	&	FragTrap::operator=(FragTrap const & src)
{
	if (&src == this)
		return *this;
	ClapTrap::operator=(src);
	return *this;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << getName() << " is alive !" << std::endl;
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDammage(30);
}

FragTrap::~FragTrap(void)
{
	std::cout  << "FragTrap " << getName() << " died" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout  << "* Clap * " << getName() << " made a high fives" << std::endl;
}