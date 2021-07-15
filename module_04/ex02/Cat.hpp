#ifndef Cat_HPP
 #define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain   *m_brain;
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();

        Cat &   operator=(Cat const & rhs);

        void            makeSound(void) const;
};


#endif