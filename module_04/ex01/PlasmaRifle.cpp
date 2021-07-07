#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():	AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src): AWeapon(src.m_name, src.m_apCost, src.m_damage)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src)
{
    if (&src == this)
        return *this;
    AWeapon::operator=(src);
	return (*this);
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}