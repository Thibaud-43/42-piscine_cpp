#ifndef Character_HPP
 #define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    private:
        Character(void);
        std::string m_name;
        AMateria    *m_materia[4];
        int         m_nbMateria;
	public:
        Character(std::string const & name);
        Character(Character const & src);
        Character   &   operator=(Character const & rhs);
		virtual ~Character();

        int                 getNbMateria(void) const;

		std::string const & getName() const;
		void                equip(AMateria* m);
		void                unequip(int idx);
		void                use(int idx, ICharacter& target);
};

#endif