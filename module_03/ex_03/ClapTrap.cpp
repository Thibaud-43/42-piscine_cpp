#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << getName() << " is alive !" << std::endl;
}


ClapTrap::ClapTrap(std::string name): m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDammage(0)
{
	std::cout << getName() << " is alive !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<getName() << " died" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << getName() << " is alive !" << std::endl;
}

ClapTrap &	ClapTrap::operator= (ClapTrap const & src)
{	
	if (&src == this)
		return *this;
	setName(src.m_name);
	setAttackDammage(src.m_attackDammage);
	setEnergyPoints(src.m_energyPoints);
	setHitPoints(src.m_hitPoints);
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << getName() << "> attacks <" << target << ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " lose : " << amount << " points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " repairs : " << amount << " points" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return m_name;
}

void		ClapTrap::setName(const std::string name)
{
	m_name = name;
}

int			ClapTrap::getHitPoints(void) const
{
	return m_hitPoints;
}

void		ClapTrap::setHitPoints(const int hitPoints)
{
	m_energyPoints = hitPoints;
}

int			ClapTrap::getEnergyPoints(void) const
{
	return m_energyPoints;
}

void		ClapTrap::setEnergyPoints(const int energyPoints)
{
	m_energyPoints = energyPoints;
}

int			ClapTrap::getAttackDammage(void) const
{
	return m_attackDammage;
}

void		ClapTrap::setAttackDammage(const int attackDammage)
{
	m_attackDammage = attackDammage;
}