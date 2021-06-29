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
            s += std::string(argv[k]);
		for (int k = 0 ; k < s.length() ; k++)
            s[k] = toupper(s[k]);
    	std::cout << s << std::endl;
	}
    return (0);
}