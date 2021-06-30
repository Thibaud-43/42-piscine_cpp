#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << m_name << " is alive !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout  << "FragTrap " << m_name << " died" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout  << "* Clap * " << m_name << " made a high fives" << std::endl;
}