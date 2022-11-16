#include "Harl.hpp"

Harl::Harl(void) {
	std::cout<< "Harl a ete cree" << std::endl;
	return ;
}

Harl::~Harl(void) {
	std::cout << "Et Harl est mort" << std::endl;
	return ;
}

void	Harl::complain( std::string level ) {
	std::string str[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			count = -1;
	void		(*option_ptr[4])(void) = { this->_debug, this->_info, this->_warning, this->_error };
	// option_ptr[0] = this->_debug;
	// option_ptr[1] = this->_info;
	// option_ptr[2] = this->_warning;
	// option_ptr[3] = this->_error;

	while (++count < 4)
	{
		if (level == str[count])
		{
			option_ptr[count]();
			return ;
		}
	}
	std::cout << "Harl is too enraged to speak." << std::endl;
	return ;
}

void	Harl::_debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special-ketchup burger. I really do !";
	std::cout << std::endl;
	return ;
}

void	Harl::_info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't putenough bacon in my burger !";
	std::cout << " If you did, I wouldn't be asking for more !";
	std::cout << std::endl;
	return ;
}

void	Harl::_warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years ";
	std::cout << "whereas you started working here since last month.";
	std::cout << std::endl;
	return ;
}

void	Harl::_error( void ) {
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}
