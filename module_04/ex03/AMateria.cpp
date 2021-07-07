#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): m_type(type), m_xp(0)
{
}

AMateria::AMateria(AMateria const & src): m_type(src.m_type), m_xp(src.m_xp)
{

}

AMateria	&	AMateria::operator=(AMateria const & rhs)
{
	if (&rhs == this)
		return *this;
	m_xp = rhs.getXP();
	m_type = rhs.getType();
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType(void) const
{
	return (m_type);
}

unsigned int AMateria::getXP(void) const
{
	return (m_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	m_xp += 10;
}