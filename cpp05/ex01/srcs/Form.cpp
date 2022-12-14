/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:22:27 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/13 13:22:29 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Form.hpp"

Form::Form( void ) : _name("Basic Form"), _signed(false),
					_signedgrade( 150 ), _execgrade( 150 ) {
	return ;
}

Form::Form( std::string name, int signedgrade, int execgrade ) : _name( name ), _signed(false),
					_signedgrade( signedgrade ), _execgrade( execgrade ) {
	if (signedgrade < 1 || execgrade < 1)
		throw(Form::GradeTooHightException());
	else if (signedgrade > 150 || execgrade > 150)
		throw(Form::GradeTooLowException());
	return ;
}

Form::Form( const Form & value ) : _name( value.getName() ), _signed( value.getSigned() ),
					_signedgrade( value.getSignedGrade() ), _execgrade( value.getExecGrade() ) {
	return ;
}

Form::~Form( void ) {
	return ;
}

Form &	Form::operator=( const Form & rhs ) {
	this->setSigned( rhs.getSigned() );
	return *this;
}

const char *	Form::GradeTooHightException::what( void ) const throw() {
	return "One grade is too hight for the Form !!";
}

const char *	Form::GradeTooLowException::what( void ) const throw() {
	return "One grade is too low for the Form !!";
}

void	Form::beSigned( const Bureaucrat & employee ) {
	if (employee.getGrade() > this->getSignedGrade())
		throw(Form::GradeTooLowException());
	else
		this->setSigned( true );
	return ;
}

void	Form::beExec( const Bureaucrat & employee ) {
	if (employee.getGrade() > this->getExecGrade())
		throw(Form::GradeTooLowException());
	return ;
}

const std::string	Form::getName( void ) const {
	return this->_name;
}

bool	Form::getSigned( void ) const {
	return this->_signed;
}

void	Form::setSigned( bool issigned ) {
	this->_signed = issigned;
	return ;
}

int	Form::getSignedGrade( void ) const {
	return this->_signedgrade;
}

int	Form::getExecGrade( void ) const {
	return this->_execgrade;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs ) {
	o << "Form " << rhs.getName() << ", status : ";
	if (rhs.getSigned())
		o << "signed. ";
	else
		o << "not signed. ";
	o << "Grade required to sign it : " << rhs.getSignedGrade();
	o << ". Grade required to execute it : " << rhs.getExecGrade();
	return o;
}
