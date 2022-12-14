/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:05:30 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 12:06:19 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Bureaucrat.hpp"
#include "headers/ShrubberyCreationForm.hpp"
#include "headers/RobotomyRequestForm.hpp"
#include "headers/PresidentialPardonForm.hpp"
#include "headers/Intern.hpp"
#include <cmath>

int	main( int argc, char **argv ) {
	if (argc != 2)
		std::cout << "Needing only one argument" << std::endl;
	else if (atoi( argv[1] ) == 1) {
		Intern	someRandomIntern;
		AForm*	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat	Bob( "Bob", 1 );
		try {
			Bob.executeForm( *rrf ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
		if (rrf)
			delete rrf;
	}
	else if (atoi( argv[1] ) == 2) {
		Intern	someRandomIntern;
		AForm*	rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			Bureaucrat	Bob( "Bob", 1 );
		try {
			Bob.executeForm( *rrf ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
		if (rrf)
			delete rrf;
	}
	else if (atoi( argv[1] ) == 3) {
		Intern	someRandomIntern;
		AForm*	rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			Bureaucrat	Bob( "Bob", 1 );
		try {
			Bob.executeForm( *rrf ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
		if (rrf)
			delete rrf;
	}
	else if (atoi( argv[1] ) == 4) {
		Intern	someRandomIntern;
		AForm*	rrf;
		rrf = someRandomIntern.makeForm("unexisting form", "Bender");
			Bureaucrat	Bob( "Bob", 1 );
		try {
			Bob.executeForm( *rrf ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
		if (rrf)
			delete rrf;
	}
	return 0;
}

