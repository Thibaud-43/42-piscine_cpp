#include "Peon.hpp"

Peon::Peon(void): Victim("")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src): Victim(src.m_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon    &   Peon::operator=(Peon const & rhs)
{
	if (this == &rhs)
		return *this;
	Victim::operator=(rhs);
	return *this;
}


void 			Peon::getPolymorphed(void) const
{
	std::cout << m_name <<" has been turned into a pink pony!" << std::endl;
}

