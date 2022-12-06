#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {
	public:
		Dog( void );
		Dog( const Dog & value );
		~Dog( void );

		virtual void	makeSound( void ) const;

		Brain *	getBrain( void ) const;
		void	setBrain( Brain * brain );
		
	private:
		Brain *	_brain;

};

#endif