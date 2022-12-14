#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm( "PresidentialPardonForm", 25, 5 ) {
	this->_target = "NoTarget";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( "PresidentialPardonForm", 25, 5 ) {
	this->_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & value ) : AForm( "PresidentialPardonForm", 25, 5 ) {
	this->_target = value.getTarget();
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs ) {
	this->_target = rhs.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void	PresidentialPardonForm::execute( const Bureaucrat & executor ) const {
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::CantExecuteFormException());
	else {
		std::cout << this->getTarget() << " has been excused by Zaphod Beeblebrox." << std::endl;
	}
	return ;
}