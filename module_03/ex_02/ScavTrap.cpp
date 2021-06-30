#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << m_name << " is alive !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout  << "ScavTrap " << m_name << " died" << std::endl;
}