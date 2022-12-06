#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal	{
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & value );
		virtual ~WrongAnimal( void );

		WrongAnimal &		operator=( const WrongAnimal & rhs );

		std::string		getType( void ) const;
		void			setType( std::string type );
		void			makeSound( void ) const;

	protected:
		std::string	_type;

};

#endif
