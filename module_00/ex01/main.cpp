#include "Book.hpp"

int     main(int argc, char **argv)
{
	bool			stop = false;
	std::string		command;
	Book			phoneBook;


	while (stop == false)
	{	
		std::cout << "Tappez une commande (ADD, EXIT, SEARCH) :" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "EXIT")
		{
			std::cout << "Exiting..." <<std::endl << std::endl;
			stop = true;
		}
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << "COMMANDE INEXISTANTE"<<std::endl << std::endl;
	}
	return (0);
}