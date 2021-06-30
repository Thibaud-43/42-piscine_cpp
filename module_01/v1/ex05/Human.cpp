#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
	
}

const Brain     &Human::getBrain(void) const
{
    return (m_brain);
}

std::string     Human::identify(void) const
{
	return (m_brain.identify());
}
