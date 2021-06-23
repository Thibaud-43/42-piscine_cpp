#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->weapon.getType() << std::endl;
}

void    HumanA::setType(std::string type)
{
    this->weapon.setType(type);
}