#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string		m_name;
		unsigned int	m_grade;
	public:
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

		Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(std::string name, unsigned int grade);
		virtual ~Bureaucrat();

		Bureaucrat	&	operator=(Bureaucrat const & rhs);

		unsigned int	getGrade(void) const;
		std::string		getName(void) const;

		void			incrementGrade(void);
		void			decrementGrade(void);


		
};

std::ostream	&	operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif
