#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &src): AMateria("cure")
{
	m_xp = src.m_xp;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &src)
{
	m_xp = src.m_xp;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}