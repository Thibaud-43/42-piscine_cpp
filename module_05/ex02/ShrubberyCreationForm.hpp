#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
        std::ofstream   m_myFileWriting;
        std::string    	m_fileName;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&	operator=(ShrubberyCreationForm const & rhs);

		void execute(Bureaucrat const &executor) const;
};

#endif
