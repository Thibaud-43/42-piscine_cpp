#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
    Bureaucrat jose("jose", 150);
    Bureaucrat boss("boss", 1);

    ShrubberyCreationForm   house("house");
    RobotomyRequestForm     r2d2("r2d2");
    PresidentialPardonForm  mesrine("mesrine");

    std::cout << boss << std::endl;
    std::cout << jose << std::endl << std::endl << std::endl;

    jose.signForm(house);
    jose.executeForm(house);
    std::cout << house << std::endl;
    boss.signForm(house);
    boss.executeForm(house);
    std::cout << house << std::endl << std::endl;

    jose.signForm(r2d2);
    jose.executeForm(r2d2);
    std::cout << r2d2 << std::endl;
    boss.signForm(r2d2);
    boss.executeForm(r2d2);
    std::cout << r2d2 << std::endl << std::endl;

    jose.signForm(mesrine);
    jose.executeForm(mesrine);
    std::cout << mesrine << std::endl;
    boss.signForm(mesrine);
    boss.executeForm(mesrine);
    std::cout << mesrine << std::endl << std::endl;



    return 0;
}
