# include "Character.hpp"

Character::Character(void)
{
    
}

Character::Character(std::string const &name): m_name(name), m_nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = nullptr;
}

Character::Character(Character const & src): m_name(src.m_name), m_nbMateria(0)
{
    for (int i = 0 ; i < src.getNbMateria() ; i++)
        equip(src.m_materia[i]->clone());
    for (int i = src.getNbMateria() ; i < 4 ; i++)
        m_materia[i] = nullptr;
}

Character   &   Character::operator=(Character const & rhs)
{
    if (&rhs == this)
        return *this;

    for (int i = 0; i < getNbMateria(); i++)
    {
        unequip(i);
        delete m_materia[i];
    }
    for (int i = 0 ; i < rhs.getNbMateria(); i++)
        equip(rhs.m_materia[i]->clone());
    for (int i = rhs.getNbMateria() ; i < 4 ; i++)
        m_materia[i] = nullptr;
    m_name = rhs.getName();
    return *this;
}

Character::~Character(void)
{
    for (int i = 0; i < m_nbMateria; i++)
		delete m_materia[i];
}

std::string const & Character::getName(void) const
{
    return m_name;
}

int Character::getNbMateria(void) const
{
    return m_nbMateria;
}

void                Character::equip(AMateria* m)
{
    if (m_nbMateria < 3 && m != nullptr)
    {
        for (int i = 0; i < m_nbMateria; i++)
            if (m_materia[i] == m)
                return ;
        m_materia[m_nbMateria] = m;
        m_nbMateria++;
    }
}

void                Character::unequip(int idx)
{
    if (idx > 0 && m_nbMateria > 0 && m_materia[idx] != nullptr)
    {
        for (int i = idx ; i < 3 ; i++)
        {
            m_materia[i] = m_materia[i + 1];
            m_materia[i + 1] = nullptr;
        }
    }
    m_nbMateria--;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= m_nbMateria && m_materia[idx] != nullptr)
        m_materia[idx]->use(target);
}
