#ifndef Enemy_HPP
 #define Enemy_HPP

#include <string>
#include <iostream>

class Enemy
{
	protected:
		std::string 	m_type;
		int				m_hitPoints;
	public:
		Enemy();
		Enemy(Enemy const & src);
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();

		Enemy	&	operator=(Enemy const & rhs);

		std::string const & getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);
};

#endif