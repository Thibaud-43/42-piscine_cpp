#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>
#include <tgmath.h>

class Fixed
{
private:
	int					m_rawBits;
	static int const	numberFractionalBits;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const integer);
	Fixed(float const floatingPoint);

	virtual	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
	Fixed &	operator=(Fixed const & rhs);

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
