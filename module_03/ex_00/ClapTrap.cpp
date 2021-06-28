#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDammage(0)
{
	std::cout << m_name << " is alive !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << m_name << " died" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << m_name << " attacks : " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << m_name << " lose : " << amount << "points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << m_name << " repairs : " << amount << "points" << std::endl;
}