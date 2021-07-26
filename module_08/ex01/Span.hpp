#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>		m_vector;
		unsigned int			m_size;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const & src);
		virtual ~Span();

		Span	&	operator=(Span const & rhs);

		std::vector<int>	&	getVector(void);

		void					addNumber(int nb);
		class limitException : public std::exception
		{
			public:
				limitException(void){return ;};
				virtual ~limitException(void) throw(){return ;};
				virtual const char    *what() const throw(){return("Limit reached");};
		};

};

std::ostream	&		operator<<(std::ostream & o, Span & rhs);

#endif
