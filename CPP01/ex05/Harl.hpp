#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include "Colors.hpp"
class Harl
{
	public:
		void complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};


typedef void (Harl::*pointer_to_member)(void);

#endif