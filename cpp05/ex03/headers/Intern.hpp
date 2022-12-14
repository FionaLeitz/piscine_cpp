#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern {
	public:
		Intern( void );
		Intern( const Intern & value );
		~Intern( void );

		Intern &			operator=( const Intern & rhs );

		AForm *			makeForm( std::string formname, std::string target );

		private:

};

#endif
