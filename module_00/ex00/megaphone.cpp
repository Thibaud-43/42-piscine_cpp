#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int     main(int argc, char **argv)
{
    std::string     s;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int k = 1 ; k < argc ; k++)
    {
        for (int i = 0 ; i < strlen(argv[k]); i++)
            argv[k][i] = toupper(argv[k][i]);
        if (k == argc - 1)
            s += std::string(argv[k]);
        else
            s += std::string(argv[k]) + std::string(" ");
    }
    std::cout << s << std::endl;
    return (0);
}