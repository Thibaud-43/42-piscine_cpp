#include "PowerFist.hpp"

PowerFist::PowerFist():	AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &src): AWeapon(src.m_name, src.m_apCost, src.m_damage)
{
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(PowerFist const &src)
{
    if (&src == this)
        return *this;
    AWeapon::operator=(src);
	return (*this);
}

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}