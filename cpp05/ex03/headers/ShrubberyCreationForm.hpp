#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & value );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm &		operator=( const ShrubberyCreationForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		std::string	_target;

};

/*
signuature 145, execution 137
creer un fichier nomme <target> dans le repertoire courant
ecrire des arbres ascii dedans
*/

#endif
