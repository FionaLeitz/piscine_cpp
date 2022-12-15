#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & value );
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm &		operator=( const RobotomyRequestForm & rhs );

		std::string			getTarget( void ) const;
		virtual void		execute( const Bureaucrat & executor ) const;

	private:
		RobotomyRequestForm( void );

		std::string	_target;

};

#endif
