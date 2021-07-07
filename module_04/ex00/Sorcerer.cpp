#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void): m_name(""), m_title("")
{
	std::cout << m_name << ", " << m_title << ", is born! "<< std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title): m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born! "<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << m_name << ", " << m_title << ", is born! "<< std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer    &   Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this == &rhs)
		return *this;
	m_name = rhs.m_name;
	m_title = rhs.m_title;
	return *this;
}

std::string		Sorcerer::getName(void) const
{
	return m_name;
}

std::string		Sorcerer::getTitle(void) const
{
	return m_title;
}

void			Sorcerer::setName(const std::string name)
{
	m_name = name;
}

void			Sorcerer::setTitle(const std::string title)
{
	m_title = title;
}

std::ostream	&	operator<<(std::ostream & out, Sorcerer const & sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}

void 				Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}
