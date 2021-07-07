#include "Ice.hpp"

Ice::Ice():	AMateria("ice")
{
}

Ice::Ice(Ice const &src): AMateria("ice")
{
	m_xp = src.m_xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &src)
{
	m_xp = src.m_xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}