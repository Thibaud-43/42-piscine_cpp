#include <string>
#include <iostream>

int main(void)
{
    std::string     string = "HI THIS IS BRAIN";
    std::string&    stringREF = string;
    std::string*    stringPTR = &string;

    std::cout << "affichage via reference : " << stringREF << std::endl;
    std::cout << "affichage via pointeur  : " << *stringPTR << std::endl;
    return (0);
}