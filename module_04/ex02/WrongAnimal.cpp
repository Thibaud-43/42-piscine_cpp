#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): m_type("")
{
    std::cout << "A wrong animal is borned" << std::endl;
    
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): m_type(src.m_type)
{
    std::cout << "A wrong animal is borned" << std::endl;

}

WrongAnimal::WrongAnimal(std::string type): m_type(type)
{
    std::cout << "A wrong animal is borned" << std::endl;

}


WrongAnimal::~WrongAnimal()
{
    std::cout << "A wrong animal is died" << std::endl;
    
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
