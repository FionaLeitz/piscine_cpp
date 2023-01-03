#ifndef TYPES_HPP
# define TYPES_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class	Types	{
	public:
		Types( void );
		Types( char * str );
		Types( const Types & value );
		~Types( void );

		Types &			operator=( const Types & rhs );

		bool			checkspec( void ) const;
		bool			checknbr( void );

		std::string		getType( void ) const;
		void			setType( std::string str );
		std::string		getStr( void ) const;
		void			setStr( std::string str );
		char			getCharacter( void ) const;
		void			setCharacter( char character );
		int				getInteger( void ) const;
		void			setInteger( int nbr );
		float			getFloat( void ) const;
		void			setFloat( float nbr );
		double			getDouble( void ) const;
		void			setDouble( double nbr ) ;

	private:
		void			convert( void );
		
		std::string		_type;
		std::string		_str;
		char			_character;
		int				_integer;
		float			_float;
		double			_double;
};

std::ostream &	operator<<( std::ostream & o, Types const & rhs );

#endif
