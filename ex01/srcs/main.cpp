#include "Phonebook.h"

int main()
{
	std::string inp;

    while (1)
    {
    	Phonebook book;
        std::cin >> inp;
        std::cout << book.getCount();
    }
}
