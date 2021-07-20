#ifndef Convertor_HPP
# define Convertor_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits>
#include <math.h>     
#include <stdexcept>

class Convertor
{
	private:
		const char *				m_toConvert;
		long double					m_double;
	public:
		Convertor();
		Convertor(Convertor const & src);
		Convertor(const char * toConvert);
		virtual ~Convertor();

		Convertor	&	operator=(Convertor const & rhs);

		int				toInt(void);
		char			toChar(void);
		float			toFloat(void);
		double			toDouble(void);
		void			convert(void);

		class NonDisplayableException : public std::exception
		{
			public:
				NonDisplayableException(void);
				virtual ~NonDisplayableException(void) throw();
				virtual const char    *what() const throw();
		};

		class ImpossibleException : public std::exception
		{
			public:
				ImpossibleException(void);
				virtual ~ImpossibleException(void) throw();
				virtual const char    *what() const throw();
		};
		static bool is_only_digit(std::string const &str);

};

#endif
