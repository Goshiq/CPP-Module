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
		std::string	secret;
	public:
		Contact();
		~Contact();
		int	get_count(void);
		Contact		set_first_name(std::string new_data);
		std::string	get_first_name(void);
		Contact		set_last_name(std::string new_data);
		std::string	get_last_name(void);
		Contact		set_nickname(std::string new_data);
		std::string	get_nickname(void);
		Contact		set_phone_number(std::string new_data);
		std::string	get_phone_number(void);
		Contact		set_secret(std::string new_data);
		std::string	get_secret(void);

		Contact	enter_first_name(void);
		Contact	enter_last_name(void);
		Contact	enter_nickname(void);
		Contact	enter_phone_number(void);
		Contact	enter_secret(void);
		void	show_full(int	index);
};

#endif
