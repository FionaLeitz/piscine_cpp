#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & value );
		~RobotomyRequestForm( void );

		RobotomyRequestForm &		operator=( const RobotomyRequestForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		RobotomyRequestForm( void );

		std::string	_target;

};

/*
signuature 72, execution 45
faire des bruits de perceuse
informer que <target> a ete robotomise
	-> succes 50%
sinon informer que l'operation a echoue
*/

#endif
