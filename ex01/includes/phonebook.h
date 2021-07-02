#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string.h>

class Phonebook
{
	private:
    	static int count;

	public:
    	Phonebook();
    	~Phonebook();
    	int getCount();
};

#endif
