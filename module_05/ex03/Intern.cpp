
#include "Intern.hpp"

Intern::Intern(void)
{
    return ;
}

Intern::Intern(const Intern &src)
{
    *this = src;
    return ;
}

Intern::~Intern(void)
{
    return ;
}

Intern
&Intern::operator= (const Intern &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}


Form*
Intern::makeForm(std::string name, std::string target)
{
    try
    {
       for (int i = 0; i < 3; i++)
           if (_forms[i] == name)
            {
                std::cout << "Intern creates " << name << std::endl;
                return (this->*_functionPointers[i])(target);
            } 
        throw FormNotFoundException();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        return nullptr;
    }
}

Form*
Intern::m_newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form*
Intern::m_newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*
Intern::m_newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

std::string Intern::_forms[3]={
    "robotomy request",
    "presidential pardon",
    "shrubbery creation",
};

Intern::FunctionPointer Intern::_functionPointers[3] = {
    &Intern::m_newRobotomyRequestForm,
    &Intern::m_newPresidentialPardonForm,
    &Intern::m_newShrubberyCreationForm,
};


Intern::
FormNotFoundException::FormNotFoundException(void)
{
	return ;
}

Intern::
FormNotFoundException::~FormNotFoundException(void) throw()
{
	return ;
}

const char    *		Intern::
FormNotFoundException::what() const throw()
{
	return("<INTERN> Form not found !");
}