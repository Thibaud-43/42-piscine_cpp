#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal(src)
{

}

WrongCat::~WrongCat()
{
    
}

WrongCat &   WrongCat::operator=(WrongCat const & rhs)
{
    if (&rhs == this)
        return *this;
    WrongAnimal::operator=(rhs);
    return *this;
}

void            WrongCat::makeSound(void) const
{
    std::cout << "Miaaaou" << std::endl;
}