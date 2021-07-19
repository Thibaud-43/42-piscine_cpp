#include "Form.hpp"

Form::Form(): m_name(""), m_gradeToExecute(1), m_gradeToSign(1), m_signed(false)
{

}

Form::Form(Form const & src): m_name(src.m_name), m_gradeToExecute(src.m_gradeToExecute), m_gradeToSign(src.m_gradeToSign), m_signed(src.m_signed)
{

}

Form::~Form()
{

}

Form::Form(std::string name, bool isSigned, unsigned int gradeToSign, unsigned int gradeToExecute):
m_name(name), m_gradeToExecute(gradeToExecute), m_gradeToSign(gradeToSign), m_signed(isSigned)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		return ;
}

Form	&	Form::operator=(Form const & rhs)
{
	if (&rhs == this)
		return *this;
	m_signed = rhs.m_signed;
	return *this;
}


bool
Form::getSigned(void) const
{
    return (m_signed);
}

int
Form::getGradeToSign(void) const
{
    return (m_gradeToSign);
}

int
Form::getGradeToExecute(void) const
{
    return (m_gradeToExecute);
}

std::string
Form::getName(void) const
{
    return (m_name);
}

std::ostream
&operator<< (std::ostream &out, const Form &rhs)
{
    out << "The form: " << rhs.getName() << " which is" \
        << (rhs.getSigned() ? "" : " not ") \
        << " signed requires a grade " << rhs.getGradeToSign() \
        << " to sign, and " << rhs.getGradeToExecute() << " to be executed.";
    return (out);
}

void                      Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > m_gradeToSign)
		throw GradeTooLowException();
	else
		m_signed = true;
	return ;
}

void                      Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > m_gradeToExecute)
		throw GradeTooLowException();
	else if (m_signed == false)
		throw FormNotSignedException();
	return ;
}

/*
*	Exeptions
*/

Form::
GradeTooHighException::GradeTooHighException(void)
{
	return ;
}

Form::
GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

const char    *		Form::
GradeTooHighException::what() const throw()
{
	return("<FORM> Grade too high !");
}

Form::
GradeTooLowException::GradeTooLowException(void)
{
	return ;
}

Form::
GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

const char    *		Form::
GradeTooLowException::what() const throw()
{
	return("<FORM> Grade too low !");
}

Form::
FormNotSignedException::FormNotSignedException(void)
{
	return ;
}

Form::
FormNotSignedException::~FormNotSignedException(void) throw()
{
	return ;
}

const char    *		Form::
FormNotSignedException::what() const throw()
{
	return("<FORM> The form isn't signed !");
}