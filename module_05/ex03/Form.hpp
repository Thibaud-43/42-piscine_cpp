#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string		m_name;
		bool					m_signed;
		const unsigned int		m_gradeToSign;
		const unsigned int		m_gradeToExecute;
	public:
		Form();
		Form(Form const & src);
		Form(std::string name, bool isSigned, unsigned int gradeToSign, unsigned int gradeToExecute);
		virtual ~Form();

		Form	&	operator=(Form const & rhs);

		
		bool                      getSigned(void) const;
		int                       getGradeToSign(void) const;
		int                       getGradeToExecute(void) const;
		std::string               getName(void) const;

		virtual void              execute(Bureaucrat const & executor) const;
		void                      beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				virtual ~GradeTooHighException(void) throw();
				virtual const char    *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				virtual ~GradeTooLowException(void) throw();
				virtual const char    *what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException(void);
				virtual ~FormNotSignedException(void) throw();
				virtual const char    *what() const throw();
		};

};


std::ostream                  &operator<<(std::ostream &out, const Form &rhs);

#endif
