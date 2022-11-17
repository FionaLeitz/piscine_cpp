#include "Harl.hpp"

typedef struct	s_complaints
{
	std::string	str;
	void		(Harl::*func)() const;
}				t_complaints;

Harl::Harl(void) {
	std::cout<< "Harl a ete cree" << std::endl;
	return ;
}

Harl::~Harl(void) {
	std::cout << "Et Harl est mort" << std::endl;
	return ;
}

void	Harl::complain( std::string level ) {
	int				count = -1;
	t_complaints	complaints[4] = {
		{"DEBUG", &Harl::_debug},
		{"INFO", &Harl::_info},
		{"WARNING", &Harl::_warning},
		{"ERROR", &Harl::_error}
	};
	while (++count < 4)
	{
		if (level == complaints[count].str)
		{
			(this->*(complaints[count].func))();
			return ;
		}
	}
	std::cout << "Harl is too enraged to speak properly." << std::endl;
	return ;
}

void	Harl::_debug( void ) const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special-ketchup burger. I really do !";
	std::cout << std::endl;
	return ;
}

void	Harl::_info( void ) const {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't putenough bacon in my burger !";
	std::cout << " If you did, I wouldn't be asking for more !";
	std::cout << std::endl;
	return ;
}

void	Harl::_warning( void ) const {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years ";
	std::cout << "whereas you started working here since last month.";
	std::cout << std::endl;
	return ;
}

void	Harl::_error( void ) const {
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
