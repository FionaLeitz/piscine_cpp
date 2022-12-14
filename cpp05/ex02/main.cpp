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
#include <cmath>

int	main( int argc, char **argv ) {
	if (argc != 2)
		std::cout << "Needing only one argument" << std::endl;
	else if (atoi( argv[1] ) == 1) {
		try {
			ShrubberyCreationForm test( "target" );
			Bureaucrat	Bob( "Bob", 1 );
			Bob.executeForm( test ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
	}
	else if (atoi( argv[1] ) == 2) {
		try {
			RobotomyRequestForm test( "target" );
			Bureaucrat	Bob( "Bob", 1 );
			Bob.executeForm( test );
			Bob.executeForm( test ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
	}
	else if (atoi( argv[1] ) == 3) {
		try {
			PresidentialPardonForm test( "target" );
			Bureaucrat	Bob( "Bob", 1 );
			Bob.executeForm( test ); }
		catch ( std::exception & e ) {
			std::cout << "CATCH " << e.what() << std::endl;
		}
	}
	return 0;
}

