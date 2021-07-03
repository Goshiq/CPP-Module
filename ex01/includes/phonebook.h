#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string.h>

# define MAX_RECORDS 8
# define SYMBOL '*'
# define TERMINAL_WIDTH 70

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

int	show_welcome(void);
int	start_process(void);

#endif
