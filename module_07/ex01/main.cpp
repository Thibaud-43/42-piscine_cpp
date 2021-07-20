#include <string>
#include <iostream>


template <typename T>
void        print(T const & src)
{
    std::cout << src << std::endl;
}

template <typename T>
void        iter(T const address[], unsigned int const len, void(*pf)(T const & src))
{
    for (unsigned int i = 0 ; i < len; i++)
    {
        pf(address[i]);
    }
}

int main(void)
{
    std::string     str[2] = {
        "Hello",
        "World"
    };
    int     nbs[5] = {
        1,
        2,
        3,
        4,
        5
    };


    iter(str, 2, &print);
    iter(nbs, 5, &print);
    return 0;
}
