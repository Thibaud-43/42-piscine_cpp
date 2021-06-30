#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name)
{
}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void)
{
    std::cout << m_name << " attacks with his " << (m_weapon)->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}
