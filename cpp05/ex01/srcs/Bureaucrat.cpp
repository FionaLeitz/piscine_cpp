/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:05:25 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 12:05:27 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "NoName" ), _grade( 150 ) {
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ) {
	if (grade < 1)
		throw(Bureaucrat::GradeTooHightException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->setGrade( grade );
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & value ) : _name( value.getName() ) {
	this->setGrade( value.getGrade() );
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	return ;
}

Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs ) {
	this->setGrade( rhs.getGrade() );
	return *this;
}

const char *	Bureaucrat::GradeTooHightException::what( void ) const throw() {
	return "One grade is too hight for a Bureaucrat !!";
}

const char *	Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "One grade is too low for a Bureaucrat !!";
}

void	Bureaucrat::incrGrade( void ) {
	if (this->getGrade() - 1 < 1)
		throw(Bureaucrat::GradeTooLowException());
	this->setGrade( this->getGrade() - 1);
	return ;
}

void	Bureaucrat::decrGrade( void ) {
	if (this->getGrade() + 1 > 150)
		throw(Bureaucrat::GradeTooHightException());
	this->setGrade( this->getGrade() + 1 );
	return ;
}

void	Bureaucrat::signForm( Form & form ) {
	try {
		form.beSigned( *this );
		std::cout << this->getName() << " signed " << form.getName() << std::endl; }
	catch ( std::exception & e ) {
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::execForm( Form & form ) {
	try {
		form.beExec( *this );
		std::cout << this->getName() << " executed " << form.getName() << std::endl; }
	catch ( std::exception & e ) {
		std::cout << this->getName() << " couldn't execute " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
	return ;
}

const std::string	Bureaucrat::getName( void ) const {
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void	Bureaucrat::setGrade( int grade ) {
	this->_grade = grade;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
