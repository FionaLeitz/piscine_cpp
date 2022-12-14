#include "../headers/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "RobotomyRequestForm", 72, 45 ) {
	this->_target = "NoTarget";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "RobotomyRequestForm", 72, 45 ) {
	this->_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & value ) : AForm( "RobotomyRequestForm", 72, 45 ) {
	this->_target = value.getTarget();
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {
	return this->_target;
}

void	RobotomyRequestForm::execute( const Bureaucrat & executor ) const {
	static int	nbr = 0;
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::CantExecuteFormException());
	else {
		nbr++;
		if ( nbr % 2 == 0)
			std::cout << this->getTarget() << " has been robotomised succesfully!" << std::endl;
		else
			std::cout << "The operation has failed..." << std::endl;
	}
	return ;
}