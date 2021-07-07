#include "Enemy.hpp"

Enemy::Enemy():	m_type(""), m_hitPoints(0)
{
}

Enemy::Enemy(int hitPoints, std::string const &type): m_type(type), m_hitPoints(hitPoints)
{
}

Enemy::Enemy(Enemy const &src): m_type(src.m_type), m_hitPoints(src.m_hitPoints)
{
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
	if (&rhs == this)
		return (*this);
	m_type = rhs.m_type;
	m_hitPoints = rhs.m_hitPoints;
	return (*this);
}

std::string const &Enemy::getType(void) const
{
	return (m_type);
}

int Enemy::getHP(void) const
{
	return (m_hitPoints);
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	m_hitPoints -= damage;
	if (m_hitPoints < 0)
		m_hitPoints = 0;
}