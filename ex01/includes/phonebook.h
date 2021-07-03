#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string.h>

# define MAX_RECORDS 8
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
    	static int	count;
		int			id;

	public:
    	Phonebook();
    	~Phonebook();
    	int getCount() const;
};

int	print_commands(const char *line);
int	print_enter(const char *line);
int	print_line(const char *line, t_line pos);
int	show_welcome(void);
int	start_process(void);

#endif
