#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* tibo = new AssaultTerminator;
	ISpaceMarine* tibo2 = new TacticalMarine;
	ISquad* vlc = new Squad;
	ISquad* vlc2 = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc2->push(tibo2);
	vlc2->push(tibo);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "secound squad" << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete vlc2;
	return 0;

}