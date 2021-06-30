#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	std::cout << "DiamondTrap " << m_name << " is alive !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout  << "DiamondTrap " << m_name << " died" << std::endl;
}