#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iomanip>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon sword = Weapon("A super sharp sword");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(sword);
	jim.attack();
	sword.setType("A little dull sword");
	jim.attack();
}
