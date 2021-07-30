#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class	Karen
{
	private:
		void	error( void );
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	def( void );

	public:
		Karen( void );
		~Karen( void );

		void	complain( std::string level );
};

#endif
