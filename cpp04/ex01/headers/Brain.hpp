#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain {
	public:
		Brain( void );
		Brain( const Brain & value );
		~Brain( void );

		Brain &			operator=( const Brain & rhs );

		void			newIdea( std::string str );
		void			seeIdea( int nbr ) const;
		void			forgetIdea( int nbr );

		std::string		ideas[100];
		
		int				getIdeaN( void ) const;
		void			setIdeaN( int newN );


	private:
		int	_ideaN;
};

#endif
