#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
	
}

const Brain     &Human::getBrain(void) const
{
    return (_brain);
}

std::string     Human::identify(void) const
{
	return (_brain.identify());
}
