#include "Victim.hpp"

Victim::Victim(void): m_name("")
{
	std::cout << "Some random victim called " << m_name <<" just appeared!" << std::endl;
}

Victim::Victim(std::string name): m_name(name)
{
	std::cout << "Some random victim called " << m_name <<" just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout << "Some random victim called " << m_name <<" just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << m_name << " just died for no apparent reason!"<< std::endl;
}

Victim    &   Victim::operator=(Victim const & rhs)
{
	if (this == &rhs)
		return *this;
	m_name = rhs.m_name;
	return *this;
}

std::string		Victim::getName(void) const
{
	return m_name;
}

void			Victim::setName(const std::string name)
{
	m_name = name;
}

std::ostream	&	operator<<(std::ostream & out, Victim const & victim)

{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return out;
}

void 			Victim::getPolymorphed(void) const
{
	std::cout << m_name <<" has been turned into a cute little sheep!" << std::endl;
}

