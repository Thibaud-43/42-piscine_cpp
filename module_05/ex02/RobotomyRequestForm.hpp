#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
        std::string    	m_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	&	operator=(RobotomyRequestForm const & rhs);

		void execute(Bureaucrat const &executor) const;
};

#endif
