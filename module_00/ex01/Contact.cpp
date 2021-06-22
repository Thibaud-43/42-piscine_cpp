#include "Contact.hpp"


Contact::Contact(void)
{
	std::cout<< "constructor" << std::endl;
}

Contact::~Contact(void)
{
	std::cout<< "destructor" << std::endl;
}

void	Contact::init(void)
{

	std::cout << "Please fill the following informations carefully : ";
	std::cout << std::endl << "FIRST NAME : >" ;
	std::cin >>	this->firstName;

	std::cout << "LAST NAME : >" ;
	std::cin >>	this->lastName;
}