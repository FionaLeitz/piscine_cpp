#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap {
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& value );
		~ClapTrap( void );

		ClapTrap &		operator=( const ClapTrap & rhs );

		void			attack( const std::string & target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

		std::string		get_name( void ) const;
		void			set_name( std::string name );
		unsigned int	get_hp( void ) const;
		void			set_hp( unsigned int hp );
		unsigned int	get_mana( void ) const;
		void			set_mana( unsigned int mana );
		unsigned int	get_damages( void ) const;
		void			set_damages( unsigned int damages );

	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mana;
		unsigned int	_damages;

		ClapTrap( void );

};

#endif
