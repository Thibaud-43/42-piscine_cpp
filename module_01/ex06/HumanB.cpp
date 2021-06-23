#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << (this->weapon)->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
