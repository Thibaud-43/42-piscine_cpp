#include "Form.hpp"
#include "Intern.hpp"

int main(int argc, char const *argv[])
{
    Bureaucrat  jose("jose", 150);
    Bureaucrat  boss("boss", 1);
    Intern      coffeMaker;

    Form    *house;
    Form    *r2d2;
    Form    *mesrine;


    house = coffeMaker.makeForm("shrubbery creation", "house");
    r2d2 = coffeMaker.makeForm("robotomy request", "r2d2");
    mesrine = coffeMaker.makeForm("presidential pardon", "mesrine");

    std::cout << boss << std::endl;
    std::cout << jose << std::endl << std::endl << std::endl;

    jose.signForm(*house);
    jose.executeForm(*house);
    std::cout << *house << std::endl;
    boss.signForm(*house);
    boss.executeForm(*house);
    std::cout << *house << std::endl << std::endl;

    jose.signForm(*r2d2);
    jose.executeForm(*r2d2);
    std::cout << *r2d2 << std::endl;
    boss.signForm(*r2d2);
    boss.executeForm(*r2d2);
    std::cout << *r2d2 << std::endl << std::endl;

    jose.signForm(*mesrine);
    jose.executeForm(*mesrine);
    std::cout << *mesrine << std::endl;
    boss.signForm(*mesrine);
    boss.executeForm(*mesrine);
    std::cout << *mesrine << std::endl << std::endl;

    Form    *exception;
    exception = coffeMaker.makeForm("do not exist", "exception");

    delete r2d2;
    delete house;
    delete mesrine;
    return 0;
}
