#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): m_name(name), m_weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void    HumanA::attack(void)
{
    std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}

void    HumanA::setType(std::string type)
{
    m_weapon.setType(type);
}