#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.h"

# define MAX_RECORDS 8
# define PADDING 5
# define SYMBOL '*'
# define SEPARATOR '|'

/* Table width */
# define T_WIDTH 70

/* Column width */
# define C_WIDTH 10

typedef enum	e_line
{
	CENTER,
	LEFT,
	RIGHT,
}				t_line;

class Phonebook
{
	private:
		Contact		contacts[MAX_RECORDS];

	public:
    	Phonebook();
    	~Phonebook();
		int			get_contact_count(void);
		Contact		add_contact(void);
		void		search_contact(void);
};

void		clear_cin();
int			my_strcmp(std::string str1, std::string str2);
int			print_commands(void);
void		print_full(void);
int			print_good_bye(void);
int			print_line(const char *line, t_line pos, int new_line = 1);
void		print_top(void);
void		search_it(Phonebook phonebook);
int			show_welcome(int	show_top);
int			start_process(void);

#endif
