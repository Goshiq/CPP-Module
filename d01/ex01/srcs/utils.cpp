#include "phonebook.h"

void	clear_cin(void)
{
	std::cin.clear();
	std::cin.ignore(555555, '\n');
}

int	my_strcmp(std::string str1, std::string str2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = str1.length();
	len2 = str2.length();
	if (len1 != len2)
		return (1);
	while (i < len1 && i < len2)
	{
		if (toupper(str1.at(i)) != toupper(str2.at(i)))
			return (1);
		i++;
	}
	return (0);
}
