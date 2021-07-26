#include"easyfind.hpp"


int main(void)
{
    std::array<int, 5>  arr = {1, 2, 3, 4, 5};

    try
    {
        std::cout << easyfind(arr, 3) << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
