#include "Fixed.hpp"

/*
* 	Constructors 
*/

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(void): m_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*
* 	Destructors 
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

/*
* 	Operators
*/

Fixed &	Fixed::operator= (Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	m_rawBits = src.getRawBits();
	return *this;
}

/*
* 	Attibuts membres
*/

/*
* 	Fonctions membres
*/
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_rawBits = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return m_rawBits;
}

/*
* 	Attibuts non-membres
*/

int const Fixed::m_numberFractionalBits = 8;

/*
* 	Fonctions non-membres
*/