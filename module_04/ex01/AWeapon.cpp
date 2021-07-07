#include "AWeapon.hpp"

AWeapon::AWeapon():	m_name(""), m_apCost(0), m_damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apCost, int damage): m_name(name), m_apCost(apCost), m_damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &src): m_name(src.m_name), m_apCost(src.m_apCost), m_damage(src.m_damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(AWeapon const & src)
{
    if (&src == this)
        return *this;
	m_name = src.m_name;
	m_apCost = src.m_apCost;
	m_damage = src.m_damage;
	return (*this);
}

std::string const &AWeapon::getName(void) const
{
	return (m_name);
}

int AWeapon::getAPCost(void) const
{
	return (m_apCost);
}

int AWeapon::getDamage(void) const
{
	return (m_damage);
}