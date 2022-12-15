#include "../headers/Intern.hpp"

typedef struct	s_formdiff
{
	std::string	name;
	AForm		*form;
}				t_formdiff;

Intern::Intern( void ) {
	return ;
}

Intern::Intern( const Intern & value ) {
	(void)value;
	return ;
}

Intern::~Intern( void ) {
	return ;
}

Intern &	Intern::operator=( const Intern & rhs ) {
	(void)rhs;
	return *this;
}

const char *	Intern::InexistantFormException::what( void ) const throw () {
	return "This form does not exist.";
}

AForm *	Intern::makeForm( std::string formname, std::string target ) {
	AForm *	newForm = NULL;
	int	count = -1;
	t_formdiff	forms[3] = {
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};

	while (++count < 3) {
		if (formname == forms[count].name) {
			std::cout << "Intern creates " << formname << std::endl;
			newForm = forms[count].form;
		}
		else
			delete forms[count].form;
	}
	if (newForm == NULL)
	{
		std::cout << "Intern did not found form " << formname << " and did not created it" << std::endl;
		throw(Intern::InexistantFormException());
	}
	return newForm;
}
