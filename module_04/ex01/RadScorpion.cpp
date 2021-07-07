#include "RadScorpion.hpp"

RadScorpion::RadScorpion():	Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src): Enemy(src.m_hitPoints, src.m_type)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs)
{
	if (&rhs == this)
		return (*this);
    Enemy::operator=(rhs);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}