#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): m_type("")
{
    
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): m_type(src.m_type)
{

}

WrongAnimal::WrongAnimal(std::string type): m_type(type)
{

}


WrongAnimal::~WrongAnimal()
{
    
}

WrongAnimal &   WrongAnimal::operator=(WrongAnimal const & rhs)
{
    if (&rhs == this)
        return *this;
    m_type = rhs.m_type;
    return *this;
}


std::string     WrongAnimal::getType(void) const
{
    return m_type;
}

void            WrongAnimal::makeSound(void) const
{
    std::cout << "" << std::endl;
}
