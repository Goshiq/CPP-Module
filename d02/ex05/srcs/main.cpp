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
	inStr = 0;
	for (std::string buff; std::getline(in, buff);)
	{
		pos = 0;
		while (pos < buff.size())
		{
			if (buff[pos++] == repl[inStr++])
			{
				if (inStr == repl.size())
				{
					outFile << argv[3];
					inStr = 0;
				}
			}
			else
			{
				outFile << buff.substr(pos - inStr, inStr);
				inStr = 0;
			}
		}
		if (inStr)
		{
			outFile << buff.substr(pos - inStr, inStr);
		}
		inStr = 0;
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
