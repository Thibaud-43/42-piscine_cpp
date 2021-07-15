#ifndef WrongCat_HPP
 #define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        ~WrongCat();

        WrongCat &   operator=(WrongCat const & rhs);


        void            makeSound(void) const;
};


#endif