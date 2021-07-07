#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap " << getName() << " is alive !" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDammage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "ScavTrap " << getName() << " is alive !" << std::endl;
	
}

ScavTrap	&	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (&rhs == this)
		return *this;
	ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << getName() << " is alive !" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDammage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout  << "ScavTrap " << getName() << " died" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout  << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap <" << getName() << "> attacks <" << target << ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}
