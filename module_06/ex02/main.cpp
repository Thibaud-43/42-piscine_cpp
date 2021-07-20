
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <exception>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand (time(NULL));

    int i = rand() % 3;
    Base *ret;

    switch (i) {
        case 0:
            ret = new A;
            std::cout << "Instance of class A generated" << std::endl;
            break;
        case 1:
            ret = new B;
            std::cout << "Instance of class B generated" << std::endl;
            break;
        case 2:
            ret = new C;
            std::cout << "Instance of class C generated" << std::endl;
            break;
    }
    return (ret);
}

void identify_from_pointer(Base * p)
{
    A   *a = dynamic_cast<A *>(p);
    if (a == NULL)
        std::cout << "This is NOT an instance of class A" << std::endl;
    else
        std::cout << "This is an instance of class A" << std::endl;

    B   *b = dynamic_cast<B *>(p);
    if (b == NULL)
        std::cout << "This is NOT an instance of class B" << std::endl;
    else
        std::cout << "This is an instance of class B" << std::endl;

    C   *c = dynamic_cast<C *>(p);
    if (c == NULL)
        std::cout << "This is NOT an instance of class C" << std::endl;
    else
        std::cout << "This is an instance of class C" << std::endl;
}

void identify_from_reference( Base & p)
{
    try{
        A   &a = dynamic_cast<A &>(p);
        std::cout << "This is an instance of class A" << std::endl;
        static_cast<void>(a);
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "This is NOT an instance of class A" << std::endl;
    }

    try{
        B   &b = dynamic_cast<B &>(p);
        std::cout << "This is an instance of class B" << std::endl;
        static_cast<void>(b);

    }
    catch(std::bad_cast &bc)
    {
        std::cout << "This is NOT an instance of class B" << std::endl;
    }

    try{
        C   &c = dynamic_cast<C &>(p);
        std::cout << "This is an instance of class C" << std::endl;
        static_cast<void>(c);

    }
    catch(std::bad_cast &bc)
    {
        std::cout << "This is NOT an instance of class C" << std::endl;
    }

}

int main(void)
{
    Base    *base = generate();
    identify_from_pointer(base);
    std::cout << std::endl << std::endl;
    identify_from_reference(*base);
    delete base;
    return 0;
}
