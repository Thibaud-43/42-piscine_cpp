#include <string>
#include <iostream>

int main(void)
{
    std::string     string = "HI THIS IS BRAIN";
    std::string&    stringRef = string;
    std::string*    stringPtr = &string;

    std::cout << "affichage via reference : " << stringRef << std::endl;
    std::cout << "affichage via pointeur  : " << *stringPtr << std::endl;
    return (0);
}