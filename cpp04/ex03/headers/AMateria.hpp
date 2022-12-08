#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria {
	protected:
		std::string	_type;

	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria & value );
		~AMateria( void );

		AMateria &			operator=( const AMateria & rhs );

		std::string const &	getType( void ) const;
		void				setType( std::string str );

		virtual AMateria	*clone( void ) const = 0;
		// virtual void		use(ICharacter & target );

};

#endif
