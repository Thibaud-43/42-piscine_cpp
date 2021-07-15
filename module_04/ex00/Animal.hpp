#ifndef Animal_HPP
 #define Animal_HPP

#include "iostream"
#include "string"

class Animal
{
    protected:
        std::string m_type;
    public:
        Animal();
        Animal(Animal const & src);
        Animal(std::string type);
        virtual ~Animal();

        Animal &   operator=(Animal const & rhs);

        std::string     getType(void) const;
        virtual void            makeSound(void) const;
};

#endif