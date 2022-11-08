#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstring>
# include <iostream>

class Zombie {

	public:
		Zombie( std::string name ) ;
		~Zombie( void ) ;
		void		annonce( void );

	private:
		std::string	_name;

};

#endif