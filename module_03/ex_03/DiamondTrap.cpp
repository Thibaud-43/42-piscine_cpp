#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "[DEFAULT] DiamondTrap " << getName() << " is alive !" << std::endl;
	setName("none");
	ClapTrap::setName(getName() + "_clap_name");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDammage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "[COPY] DiamondTrap " << getName() << " is alive !" << std::endl;
	*this = src;
}

DiamondTrap	&	DiamondTrap::operator=(DiamondTrap const & src)
{
	if (&src == this)
		return *this;
	setName(src.getName());
	ClapTrap::setName(src.getName() + "_clap_name");
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDammage(src.getAttackDammage());
	return *this;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	setName(name);
	std::cout << "[STRING] DiamondTrap " << m_name << " is alive !" << std::endl;
	ClapTrap::setName(getName() + "_clap_name");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDammage(30);
}


DiamondTrap::~DiamondTrap(void)
{
	std::cout  << "DiamondTrap " << getName() << " died" << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return m_name;
}

void		DiamondTrap::setName(const std::string name)
{
	m_name = name;
}
 
void		DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << m_name << " clapTrap name :" << ClapTrap::m_name << std::endl;
}
