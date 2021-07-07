#include "Character.hpp"

Character::Character(void): m_AP(40), m_name(""), m_weapon(NULL)
{

}

Character::Character(std::string const & name):m_AP(40), m_name(name), m_weapon(NULL)
{

}

Character::Character(Character const & src): m_AP(src.m_AP), m_name(src.m_name), m_weapon(src.m_weapon)
{

}

Character::~Character(void)
{
    
}

Character   &   Character::operator=(Character const & rhs)
{
    if (&rhs == this)
        return *this;
    m_AP = rhs.m_AP;
    m_name = rhs.m_name;
    m_weapon = rhs.m_weapon;
    return *this;
}

std::string const &Character::getName(void) const
{
	return (m_name);
}

int Character::getAP(void) const
{
	return (m_AP);
}

AWeapon *Character::getWeapon(void) const
{
	return (m_weapon);
}


void        Character::recoverAP()
{
    m_AP += 10;
    if (m_AP > 40)
        m_AP = 40;
}

void        Character::equip(AWeapon* weapon)
{
    m_weapon = weapon;
}

void        Character::attack(Enemy* enemy)
{

    if (m_weapon == NULL || m_weapon->getAPCost() > m_AP)
        return ;
    std::cout << m_name << " attacks " << enemy->getType() << " with a "<< m_weapon->getName() << std::endl;
    m_AP -= m_weapon->getAPCost();
    m_weapon->attack();
    enemy->takeDamage(m_weapon->getDamage());
    if (enemy->getHP() == 0)
        delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character const &chara)
{
	out << chara.getName() << " has " << chara.getAP() << " AP and ";
	if (chara.getWeapon())
		out << "wields a " << chara.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}
