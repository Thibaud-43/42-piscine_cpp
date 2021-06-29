#include "Fixed.hpp"

/*
* 	Constructors 
*/

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	m_rawBits = integer << numberFractionalBits;
}

Fixed::Fixed(float const floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	m_rawBits = round((floatingPoint) * (1 << numberFractionalBits));
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

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return m_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_rawBits = raw;
}

int Fixed::toInt( void ) const
{
	return (m_rawBits >> numberFractionalBits);
}

float Fixed::toFloat( void ) const
{
	return (float(round(m_rawBits) / (1 << numberFractionalBits)));
}

/*
* 	Attibuts non-membres
*/

int const Fixed::numberFractionalBits = 8;

/*
* 	Fonctions non-membres
*/

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
