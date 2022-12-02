#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal {
	public:
		Cat( void );
		Cat( const Cat & value ) ;
		~Cat( void );

		virtual void	makeSound( void ) const;

	private:

};

#endif