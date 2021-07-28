#include <cerrno>
#include <cstring>
#include <fstream>
#include "error.hpp"

int	start_process(char **argv, std::ifstream &in)
{
	std::ofstream	outFile;

	outFile.open((std::string(argv[1]) + ".replace").c_str());
	if (!outFile.is_open())
	{
		err(std::strerror(errno));
	}
	outFile << "Kekeke";
	in.close();
	outFile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	inputFile;

	if (argc != 4 || !strcmp(argv[2], "") || !strcmp(argv[3], ""))
	{
		err("Wrong arguments");
	}
	inputFile.open(argv[1]);
	if (!inputFile.is_open())
	{
		err(std::strerror(errno));
	}
	else
	{
		return (start_process(argv, inputFile));
	}
}
