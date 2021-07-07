#ifndef Squad_HPP
 #define Squad_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	private:
		int				m_count;
		ISpaceMarine	**m_squad;

	public:
		Squad();
		Squad(Squad const & src);
		~Squad();
		Squad	&	operator=(Squad const & rhs);

		int				getCount() const;
		ISpaceMarine* 	getUnit(int) const;
		int 			push(ISpaceMarine*);
};

#endif