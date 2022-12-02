#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap	: public FragTrap, public ScavTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap & value );
		~DiamondTrap( void );
		void		whoAmI( void );

	private:
		std::string	_name;

};

#endif