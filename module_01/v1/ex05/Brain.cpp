#include "Brain.hpp"

Brain::Brain(void)
{

}

Brain::~Brain(void)
{

}

std::string     Brain::identify(void) const
{
	std::stringstream   stream;
	const long adr = (long)this;

	stream << "0x" << std::hex << adr;
	std::string result(stream.str());
	return result;
}
