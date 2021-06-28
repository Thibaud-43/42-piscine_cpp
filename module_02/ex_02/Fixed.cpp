#include "Fixed.hpp"

/*
* 	Constructors 
*/

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const integer)
{
	m_rawBits = integer << numberFractionalBits;
}

Fixed::Fixed(float const floatingPoint)
{
	m_rawBits = round((floatingPoint) * (1 << numberFractionalBits));
}

Fixed::Fixed(void): m_rawBits(0)
{
}

/*
* 	Destructors 
*/

Fixed::~Fixed()
{
}

/*
* 	Operators
*/

Fixed &	Fixed::operator= (Fixed const & src)
{
	m_rawBits = src.getRawBits();
	return *this;
}

Fixed	Fixed::operator* (Fixed const & rhs) const
{
	return toFloat() * rhs.toFloat();
}

Fixed	Fixed::operator+ (Fixed const & rhs) const
{
	return toFloat() + rhs.toFloat();
}

Fixed	Fixed::operator- (Fixed const & rhs) const
{
	return toFloat() - rhs.toFloat();
}

Fixed	Fixed::operator/ (Fixed const & rhs) const
{
	return toFloat() / rhs.toFloat();
}

Fixed & Fixed::operator++ (void)
{
	m_rawBits++;
	return *this;
}

Fixed	Fixed::operator++ (int)
{
	Fixed	tmp (*this);
	m_rawBits++;
	return tmp;
}

Fixed & Fixed::operator-- (void)
{
	m_rawBits--;
	return *this;
}

Fixed	Fixed::operator-- (int)
{
	Fixed	tmp (*this);
	m_rawBits--;
	return tmp;
}

bool	Fixed::operator< (Fixed const & rhs) const
{
	return toFloat() < rhs.toFloat();
}

bool	Fixed::operator> (Fixed const & rhs) const
{
	return toFloat() > rhs.toFloat();
}

bool	Fixed::operator<= (Fixed const & rhs) const
{
	return toFloat() <= rhs.toFloat();
}

bool	Fixed::operator>= (Fixed const & rhs) const
{
	return toFloat() >= rhs.toFloat();
}

bool	Fixed::operator== (Fixed const & rhs) const
{
	return toFloat() == rhs.toFloat();
}

bool	Fixed::operator!= (Fixed const & rhs) const
{
	return toFloat() != rhs.toFloat();
}
/*
* 	Attibuts membres
*/

/*
* 	Fonctions membres
*/

int	Fixed::getRawBits(void) const
{
	return m_rawBits;
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&	Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed const	&	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed	&	Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const	&	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return a;
	else
		return b;
}