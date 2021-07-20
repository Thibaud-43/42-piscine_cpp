#include "Convertor.hpp"

Convertor::Convertor(): m_toConvert("")
{

}

Convertor::Convertor(Convertor const & src): m_toConvert(src.m_toConvert), m_double(src.m_double)
{

}

Convertor::Convertor(const char * toConvert): m_toConvert(toConvert)
{
	if (strlen(m_toConvert) == 1 && !isdigit(m_toConvert[0]))
		m_double = static_cast<double>(m_toConvert[0]);
	else
	{
		m_double = std::atof(m_toConvert);
	}
	
}

Convertor::~Convertor()
{

}

Convertor	&	Convertor::operator=(Convertor const & rhs)
{
	if (&rhs == this)
		return *this;
	m_toConvert = rhs.m_toConvert;
	m_double = rhs.m_double;
	return *this;
}

float				Convertor::toFloat(void)
{
	if (!std::isinf(m_double) && !std::isnan(m_double) && strlen(m_toConvert) != 1 && !is_only_digit(m_toConvert))
		throw ImpossibleException();
	return static_cast<float>(m_double);
}

char				Convertor::toChar(void)
{
	if(static_cast<long long>(m_double) > std::numeric_limits<char>::max() || static_cast<long long>(m_double) < std::numeric_limits<char>::min())
		throw ImpossibleException();
	if (!std::isnan(m_double) && !std::isinf(m_double) && strlen(m_toConvert) != 1 && !is_only_digit(m_toConvert))
		throw ImpossibleException();
	if(isinf(m_double) || std::isnan(m_double))
		throw ImpossibleException();
	if (!isprint(static_cast<int>(m_double)))
		throw NonDisplayableException();
	
	return static_cast<char>(m_double);
}

int				Convertor::toInt(void)
{
	if(static_cast<long long>(m_double) > std::numeric_limits<int>::max() || static_cast<long long>(m_double) < std::numeric_limits<int>::min())
		throw ImpossibleException();
	if (!std::isinf(m_double) && !std::isnan(m_double) && strlen(m_toConvert) != 1 && !is_only_digit(m_toConvert))
		throw ImpossibleException();
	if(isinf(m_double) || std::isnan(m_double))
		throw ImpossibleException();
	return static_cast<int>(m_double);
}

double				Convertor::toDouble(void)
{
	if (!std::isinf(m_double) && !std::isnan(m_double) && strlen(m_toConvert) != 1 && !is_only_digit(m_toConvert))
		throw ImpossibleException();
	return (m_double);
}

void				Convertor::convert(void)
{
	try
	{
		char tmp = toChar();
		std::cout << "char : '" << tmp << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "char : " << e.what() << std::endl;
	}
	try
	{
		int tmp = toInt();
		std::cout << "int : " << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "int : " << e.what() << std::endl;
	}
	try
	{
		float tmp = toFloat();
		std::cout.precision(1);
		std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "float : " << e.what() << std::endl;
	}
	try
	{
		double tmp = toDouble();
		std::cout.precision(1);
		std::cout << "double : " << std::fixed << tmp << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout  << "double : " << e.what() << std::endl;
	}
}


Convertor::
NonDisplayableException::NonDisplayableException(void)
{
	return ;
}

Convertor::
NonDisplayableException::~NonDisplayableException(void) throw()
{
	return ;
}

const char    *		Convertor::
NonDisplayableException::what() const throw()
{
	return("Non displayable");
}

Convertor::
ImpossibleException::ImpossibleException(void)
{
	return ;
}

Convertor::
ImpossibleException::~ImpossibleException(void) throw()
{
	return ;
}

const char    *		Convertor::
ImpossibleException::what() const throw()
{
	return("impossible");
}

bool Convertor::is_only_digit(std::string const &str)
{
    for (int i = 0; str[i]; i++)
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != 'f')
            return false;
    return true;
}