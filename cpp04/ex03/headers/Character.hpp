#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter {
	public:
		Character( void );
		Character( std::string const & name );
		Character( const Character & value );
		~Character( void );

		Character &				operator=( const Character & rhs );

		std::string const &		getName( void );
		void					setName( std::string str );
		void					equip( AMateria * m );
		void					unequip( int idx );
		void					use( int idx, Character & target );

	private:
		std::string	_name;

};

#endif
