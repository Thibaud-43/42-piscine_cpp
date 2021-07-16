#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
    Bureaucrat jose("jose", 150);
    Bureaucrat boss("boss", 1);

    try
    {
        jose.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        boss.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << jose << std::endl;
    jose.incrementGrade();
    std::cout << jose << std::endl;
    return 0;
}
