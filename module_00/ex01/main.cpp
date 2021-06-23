#include "Book.hpp"

int     main(int argc, char **argv)
{
	bool			stop = false;
	std::string		command;
	Book			phoneBook;


	while (stop == false)
	{	
		std::cout << "Tappez une commande (ADD, EXIT, SEARCH) :" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			phoneBook.addContact();
			std::cout << "Vous avez tappé : " + command <<std::endl << std::endl;
		}	
		else if (command == "EXIT")
		{
			std::cout << "Exiting..." <<std::endl << std::endl;
			stop = true;
		}
		else if (command == "SEARCH")
		{
			std::cout << "Vous avez tappé : " + command <<std::endl << std::endl;
			phoneBook.searchContact();
		}
		else
			std::cout << "COMMANDE INEXISTANTE"<<std::endl << std::endl;
	}
	return (0);
}