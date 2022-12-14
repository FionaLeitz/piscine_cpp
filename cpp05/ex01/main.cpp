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
#include "headers/Form.hpp"
#include <cmath>

int	main( int argc, char **argv ) {
	if (argc != 2)
		std::cout << "Needing only one argument" << std::endl;
	else if (atoi( argv[1] ) == 1) {
		try {
			Form	test("Test", 1, 150);
			std::cout << test << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		try {
			Form	test("Test", 0, 150);
			std::cout << test << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		try {
			Form	test("Test", 1, 151);
			std::cout << test << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		try {
			Form	test("Test", 0, 151);
			std::cout << test << std::endl;
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	}
	else if (atoi( argv[1] ) == 2) {
		Bureaucrat employee( "Roger", 30 );
		Form form( "A38", 1, 150 );
		try {
			employee.signForm( form );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		Form form2( "A38", 30, 30) ;
		try {
			employee.signForm( form2 );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		Form form3( "A38", 29, 30) ;
		try {
			employee.signForm( form3 );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	}
	else if (atoi( argv[1] ) == 3) {
		Bureaucrat employee( "Roger", 30 );
		Form form( "A38", 1, 150 );
		try {
			employee.execForm( form );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		Form form2( "A38", 30, 30) ;
		try {
			employee.execForm( form2 );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
		Form form3( "A38", 30, 29) ;
		try {
			employee.execForm( form3 );
		}
		catch ( std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}

