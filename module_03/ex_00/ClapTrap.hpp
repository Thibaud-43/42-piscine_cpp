#ifndef ClapTrap_H
 #define ClapTrap_H

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	m_name;
	int			m_hitPoints;
	int			m_energyPoints;
	int			m_attackDammage;
public:
	ClapTrap(std::string name);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};




#endif