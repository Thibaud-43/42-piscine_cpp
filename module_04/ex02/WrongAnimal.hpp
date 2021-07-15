#ifndef WrongAnimal_HPP
 #define WrongAnimal_HPP

#include "iostream"
#include "string"

class WrongAnimal
{
    protected:
        std::string m_type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();

        WrongAnimal &   operator=(WrongAnimal const & rhs);

        std::string     getType(void) const;
        void            makeSound(void) const;
};

#endif