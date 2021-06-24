#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int     main(int argc, char **argv)
{
    std::string     s;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int k = 1 ; k < argc ; k++)
            s += std::string(argv[k]) + std::string(" ");
		transform(s.begin(), s.end(), s.begin(), ::toupper);
    	std::cout << s.substr(0, s.length() - 1) << std::endl;
	}
    return (0);
}