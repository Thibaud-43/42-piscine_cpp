#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    Karen karen;
    std::map<std::string, int>    filter;
    filter["INFO"] = 1;
    filter["DEBUG"] = 2;
    filter["WARNING"] = 3;
    filter["ERROR"] = 4;
    switch (filter[argv[1]])
    {
        case 1:
        {
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("info");
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("debug");
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("error");
            break;
        }
        case 2:
        {
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("debug");
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("error");
            break;
        }
        case 3:
        {
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("warning");
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("error");
            break;
        }
        case 4:
        {
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("error");
            break;
        }
        default: 
        {
            std::cout << "filter incorect" << std::endl;
            break;
        }
    }

    return (0);
}