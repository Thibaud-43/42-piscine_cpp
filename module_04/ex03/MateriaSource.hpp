#ifndef MateriaSource_HPP
 #define MateriaSource_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource: public IMateriaSource
{
	private:
		int 		m_nb;
		AMateria 	*m_materias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();

		MateriaSource &operator=(MateriaSource const &src);

		void 		learnMateria(AMateria *m);
		AMateria* 	createMateria(std::string const &type);
};

#endif


