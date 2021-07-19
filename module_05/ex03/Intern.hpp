#ifndef Intern_HPP
# define Intern_HPP

# include <stdexcept>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);

		~Intern(void);

		Intern						&operator= (const Intern& rhs);

		Form						*makeForm(std::string name, std::string target);
		typedef Form* (Intern::*FunctionPointer)(std::string);
		class FormNotFoundException : public std::exception
		{
			public:
				FormNotFoundException(void);
				virtual ~FormNotFoundException(void) throw();
				virtual const char    *what() const throw();
		};
	private:
		Form*						m_searchForm(std::string n, std::string t);
		Form*						m_newPresidentialPardonForm(std::string target);
		Form*						m_newRobotomyRequestForm(std::string target);
		Form*						m_newShrubberyCreationForm(std::string target);
		static std::string				_forms[3];
		static FunctionPointer 			_functionPointers[3];
};


#endif