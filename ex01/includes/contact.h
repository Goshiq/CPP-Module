#ifndef CONTACT_H
# define CONTACT_H

# include <algorithm>
# include <iostream>
# include <iomanip>
# include <string.h>

class	Contact
{
	private:
		static	int	count;
		int			id;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();
		~Contact();
};

#endif