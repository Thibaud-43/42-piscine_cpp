#ifndef Cat_HPP
 #define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();

        Cat &   operator=(Cat const & rhs);


        void            makeSound(void) const;
};


#endif