#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>

class Fixed
{
private:
	int					m_rawBits;
	static int const	m_numberFractionalBits;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed &	operator=(Fixed const & rhs);

};

#endif
