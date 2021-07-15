#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "A brain is thinking ..." << std::endl;
    
}

Brain::Brain(Brain const & src)
{
    std::cout << "A brain is thinking ..." << std::endl;

}


Brain::~Brain()
{
    std::cout << "A brain stopped ..." << std::endl;
    
}

Brain &   Brain::operator=(Brain const & rhs)
{
    if (&rhs == this)
        return *this;
    std::copy(rhs.m_ideas, rhs.m_ideas + 100, m_ideas);
    return *this;
}


std::string*     Brain::getIdeas(void)
{
    return m_ideas;
}

