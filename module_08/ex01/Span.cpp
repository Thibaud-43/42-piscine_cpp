#include "Span.hpp"

Span::Span(): m_size(0)
{
	m_vector.assign(0, 0);
}

Span::Span(unsigned int N): m_size(N)
{
	
}

Span::Span(Span const & src): m_size(src.m_size)
{
	m_vector.assign(src.m_vector.begin(), src.m_vector.end());
}

Span::~Span()
{

}

std::vector<int>	&	Span::getVector(void)
{
	return m_vector;
}


Span	&	Span::operator=(Span const & rhs)
{
	if (&rhs == this)
		return *this;
	m_size = rhs.m_size;
	m_vector.assign(rhs.m_vector.begin(),rhs.m_vector.end());
	return *this;
}

std::ostream	&		operator<<(std::ostream & o, Span & rhs)
{
	for (std::vector<int>::iterator i = rhs.getVector().begin() ; i < rhs.getVector().end(); i++)
	{
		o << *i << std::endl;
	}
	return o;
}

void		Span::addNumber(int nb)
{
	if (m_vector.size() >= m_size)
		throw limitException();
	m_vector.push_back(nb);
	
}