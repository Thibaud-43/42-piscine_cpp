#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): m_nb(0)
{
	for (int i = 0; i < 4; i++)
		m_materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src): m_nb(0)
{
	for (int i = 0; i < src.m_nb; i++)
		learnMateria(src.m_materias[i]->clone());
	for (int i = 0; i < 4; i++)
		m_materias[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < m_nb; i++)
		delete m_materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (&rhs == this)
        return *this;

    for (int i = 0; i < m_nb; i++)
        delete m_materias[i];
    for (int i = 0 ; i < rhs.m_nb; i++)
        learnMateria(rhs.m_materias[i]->clone());
    for (int i = rhs.m_nb ; i < 4 ; i++)
        m_materias[i] = nullptr;
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m_nb < 3 && m != nullptr)
    {
        for (int i = 0; i < m_nb; i++)
            if (m_materias[i] == m)
                return ;
        m_materias[m_nb] = m;
        m_nb++;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < m_nb; i++)
		if (m_materias[i]->getType() == type)
			return (m_materias[i]->clone());
	return (nullptr);
}