#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.h"

# define MAX_RECORDS 8
# define PADDING 5
# define SYMBOL '*'
# define T_WIDTH 70

typedef enum	e_line
{
	CENTER,
	LEFT,
	RIGHT,
}				t_line;

class Phonebook
{
	private:
		static	int	count;
		Contact		contacts[MAX_RECORDS];

	public:
    	Phonebook();
    	~Phonebook();
};

int			my_strcmp(std::string str1, std::string str2);
int			print_commands(void);
void		print_full(void);
int			print_line(const char *line, t_line pos, int new_line = 1);
void		search_it(Phonebook books[MAX_RECORDS]);
int			show_welcome(void);
int			start_process(void);

#endif
