#include "phonebook.h"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string inp;

    while (1)
    {
        std::cin >> inp;
        Phonebook book;
        std::cout << book.getCount();
    }
}
