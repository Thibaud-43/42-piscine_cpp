#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
        std::string    	m_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&	operator=(PresidentialPardonForm const & rhs);

		void execute(Bureaucrat const &executor) const;
};

#endif
