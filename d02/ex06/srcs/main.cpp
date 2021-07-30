#include "Karen.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Karen	karen;

	if (argc == 2)
	{
		karen.complain(argv[1]);
	}
	else
	{
		karen.complain("Kekek");
	}
}
