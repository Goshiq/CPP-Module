#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Zombie	*tt;
	Zombie	stackZombie = Zombie("A Stack Zombie!");

	tt = newZombie("A Heap Zombie");
	tt->announce();
	stackZombie.announce();
	randomChump("A Random Zombie");
	delete tt;
}
