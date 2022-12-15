/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:22:27 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/13 13:22:29 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AForm.hpp"

AForm::AForm( void ) : _name("Basic AForm"), _signed(false),
					_signedgrade( 150 ), _execgrade( 150 ) {
	return ;
}

AForm::AForm( std::string name, int signedgrade, int execgrade ) : _name( name ), _signed(false),
					_signedgrade( signedgrade ), _execgrade( execgrade ) {
	if (signedgrade < 1 || execgrade < 1)
		throw(AForm::GradeTooHightException());
	else if (signedgrade > 150 || execgrade > 150)
		throw(AForm::GradeTooLowException());
	return ;
}

AForm::AForm( const AForm & value ) : _name( value.getName() ), _signed( value.getSigned() ),
					_signedgrade( value.getSignedGrade() ), _execgrade( value.getExecGrade() ) {
	return ;
}

AForm::~AForm( void ) {
	return ;
}

AForm &	AForm::operator=( const AForm & rhs ) {
	this->setSigned( rhs.getSigned() );
	return *this;
}

const char *	AForm::GradeTooHightException::what( void ) const throw() {
	return "One grade is too hight for the AForm !!";
}

const char *	AForm::GradeTooLowException::what( void ) const throw() {
	return "One grade is too low for the AForm !!";
}

const char *	AForm::CantExecuteFormException::what( void ) const throw() {
	return "grade too low to execute form.";
}

void	AForm::beSigned( const Bureaucrat & employee ) {
	if (employee.getGrade() > this->getSignedGrade())
		throw(AForm::GradeTooLowException());
	else
		this->setSigned( true );
	return ;
}

const std::string	AForm::getName( void ) const {
	return this->_name;
}

bool	AForm::getSigned( void ) const {
	return this->_signed;
}

void	AForm::setSigned( bool issigned ) {
	this->_signed = issigned;
	return ;
}

int	AForm::getSignedGrade( void ) const {
	return this->_signedgrade;
}

int	AForm::getExecGrade( void ) const {
	return this->_execgrade;
}

std::ostream &	operator<<( std::ostream & o, AForm const & rhs ) {
	o << "AForm " << rhs.getName() << ", status : ";
	if (rhs.getSigned())
		o << "signed. ";
	else
		o << "not signed. ";
	o << "Grade required to sign it : " << rhs.getSignedGrade();
	o << ". Grade required to execute it : " << rhs.getExecGrade();
	return o;
}
