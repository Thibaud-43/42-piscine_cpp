#include <iostream>
#include <string>
#include "Sed.hpp"


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Wrong number of arguments" << endl;
	}
	else
	{
		Sed		sed(argv[1], argv[2], argv[3]);
		sed.searchAndReplace();
	}
	return 0;
}