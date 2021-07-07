#include "Squad.hpp"

Squad::Squad(): m_squad(nullptr), m_count(0)
{

}

Squad::Squad(Squad const & src): m_squad(nullptr), m_count(0)
{
	*this = src;
}

int     Squad::getCount(void) const
{
	return m_count;
}

Squad   &   Squad::operator=(Squad const & src)
{
	if (m_squad)
	{
		delete [] m_squad;
		m_squad = nullptr;
		m_count = 0;
	}
	for (int i = 0; i < src.getCount() ; i++)
		push(src.m_squad[i]);
	return *this;
}

Squad::~Squad()
{
	for (int i = 0; i < getCount(); i++)
		delete m_squad[i];
	delete [] m_squad;
}

ISpaceMarine* 	Squad::getUnit(int index) const
{
	if (index > getCount() || getCount() == 0 || index < 0)
		return (nullptr);
	return (m_squad[index]);
}

int 			Squad::push(ISpaceMarine	*unit)
{
	ISpaceMarine    **tmp;

	if (!unit)
		return getCount();
	if (m_squad)
	{    
		for (int i = 0; i < getCount() ; i++)
			if (m_squad[i] == unit)
				return getCount();
		tmp = new ISpaceMarine*[(getCount() + 1)];
		for (int i = 0; i < getCount() ; i++)
			tmp[i] = m_squad[i];
		tmp[getCount()] = unit;
		delete [] m_squad;
		m_squad = tmp;
		m_count++;
	}
	else
	{
		m_squad = new ISpaceMarine*[1];
		m_squad[0] = unit;
		m_count++;
	}
	return m_count;
}
