#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & value );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm &		operator=( const ShrubberyCreationForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		ShrubberyCreationForm( void );
		
		std::string	_target;

};

#endif
