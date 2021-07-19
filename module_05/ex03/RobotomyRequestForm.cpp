#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", false, 72, 45), m_target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src), m_target(src.m_target)
{

}


RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form("RobotomyRequestForm",	false, 72, 45), m_target(target)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (&rhs == this)
		return *this;
	m_target = rhs.m_target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    srand (time(NULL));
    if (rand() % 2)
    {
        std::cout << "BZZZZZZZZZZ..." << m_target \
                  << " has been robotomized successfully !" << std::endl;
    }
    else
    {
        std::cout << "The " << m_target << "robotomization failed !" \
                  << std::endl;
    }
    return ;
}
