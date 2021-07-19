#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", false, 25, 5), m_target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src), m_target(src.m_target)
{

}


PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("PresidentialPardonForm",	false, 25, 5), m_target(target)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (&rhs == this)
		return *this;
	m_target = rhs.m_target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << m_target << " has been pardoned by Zafod Beebkerox." << std::endl;
    return ;
}
