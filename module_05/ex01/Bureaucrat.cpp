#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): m_name(""), m_grade(150)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const & src): m_name(src.m_name), m_grade(src.m_grade)
{

}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
{
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		m_name = name;
		m_grade = grade;
	}
}


Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (&rhs == this)
		return *this;
	m_name = rhs.m_name;
	m_grade = rhs.m_grade;
	return *this;
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return m_grade;
}

std::string		Bureaucrat::getName(void) const
{
	return m_name;
}

void			Bureaucrat::incrementGrade(void)
{
	if (m_grade - 1< 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade -= 1;
	return ;
}

void			Bureaucrat::decrementGrade(void)
{
	if (m_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	m_grade += 1;
	return ;
}

std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}


void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << m_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
        std::cout << m_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

/*
*	Exeptions
*/

Bureaucrat::
GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Bureaucrat::
GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char    *		Bureaucrat::
GradeTooHighException::what() const throw()
{
	return("<BUREAUCRAT> Grade too high !");
}

Bureaucrat::
GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Bureaucrat::
GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char    *		Bureaucrat::
GradeTooLowException::what() const throw()
{
	return("<BUREAUCRAT> Grade too low !");
}