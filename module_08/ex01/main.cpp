#include "Span.hpp"

int main()
{
    Span    span(-2);
    try
    {
        for (int i = 0; i < 7; i++)
        {
            span.addNumber(i);
        }
        
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Span span2;
    span2 = span;
    std::cout << span << std::endl;
    std::cout << span2 << std::endl;
    return 0;
}
