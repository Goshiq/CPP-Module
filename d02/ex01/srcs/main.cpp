#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	N;

	N = 5;
	Zombie	*tt = zombieHorde(N, "One more zombie");
	for (int i = 0; i < N; ++i)
	{
		(tt + i)->announce();
	}
	delete[] (tt);
}
