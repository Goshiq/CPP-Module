#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	std::ifstream	inputFile;

	if (argc != 4)
		exit(1);
	inputFile.open(argv[1]);
	if (inputFile.is_open())
		std::cout << "File OK" << std::endl;
	else
		std::cout << "NO FILE" << std::endl;
}
