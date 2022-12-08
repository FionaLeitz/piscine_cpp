#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource {
	public:
		MateriaSource( void );
		~MateriaSource( void );

		void		learnMateria( AAMateria * learning );
		AMateria *	createMateria( std::string const & type );
	private:

};

#endif
