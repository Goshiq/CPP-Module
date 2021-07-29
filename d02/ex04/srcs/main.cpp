#include <cerrno>
#include <cstring>
#include <fstream>
#include "error.hpp"

int	start_process(char **argv, std::ifstream &in)
{
	std::ofstream	outFile;
	std::string		repl;
	size_t			pos;
	size_t			inStr;

	outFile.open((std::string(argv[1]) + ".replace").c_str());
	if (!outFile.is_open())
	{
		err(std::strerror(errno));
	}
	repl = std::string(argv[2]);
	for (std::string buff; std::getline(in, buff);)
	{
		inStr = 0;
		while (inStr < buff.size())
		{
			pos = buff.find(repl, inStr);
			if (pos == static_cast<size_t>(-1))
			{
				outFile << buff.substr(inStr, buff.size());
				break ;
			}
			outFile << buff.substr(inStr, pos - inStr) << argv[3];
			inStr = pos + repl.size();
		}
		outFile << '\n';
	}
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
