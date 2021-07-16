#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
    Form       loan("loan", false, 40, 40);
    Bureaucrat jose("jose", 150);
    Bureaucrat boss("boss", 1);

    std::cout << loan << std::endl;
    std::cout << boss << std::endl;
    std::cout << jose << std::endl << std::endl << std::endl;

    try
    {
        jose.signForm(loan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << loan << std::endl;
    try
    {
        boss.signForm(loan);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << loan << std::endl;
    return 0;
}
