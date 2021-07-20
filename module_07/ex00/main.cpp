#include "whatever.hpp"

int main(void)
{
    int a= 42;
    int b = 43;

    std::string     c = "Hello";
    std::string     d = "World";

    std::cout << a << "|" << b <<std::endl;
    swap(a, b);
    std::cout << a << "|" << b <<std::endl;
    std::cout << c << "|" << d <<std::endl;
    swap(c, d);
    std::cout << c << "|" << d <<std::endl;


    a= 42;
    b = 43;
    c = "Hello";
    d = "World";
    std::cout <<"MIN: " << min(a,b) <<std::endl;
    std::cout <<  "MAX: " << max(a,b) <<std::endl;
    std::cout <<"MIN: " << min(c,d) <<std::endl;
    std::cout <<  "MAX: " << max(c,d) <<std::endl;



    return 0;
}
