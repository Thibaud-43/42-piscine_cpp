#ifndef Dog_HPP
 #define Dog_HPP

#include "Animal.hpp"


class Dog : public Animal
{
    private:
        Brain   *m_brain;
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();

        Dog &   operator=(Dog const & rhs);
        Brain   *   getBrain(void) const;
        void            makeSound(void) const;
};
#endif