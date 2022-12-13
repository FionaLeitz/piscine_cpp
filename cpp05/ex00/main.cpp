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
#include <cmath>

int	main( int argc, char **argv ) {
	if (argc != 2)
		std::cout << "Needing only one argument" << std::endl;
	else if (atoi( argv[1] ) == 1) {
		try {
			Bureaucrat	test("Bob", 12 );
			std::cout << test;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl; }
		try {
			Bureaucrat	test("Bob", 155 );
			std::cout << test;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl; }
		try {
			Bureaucrat	test("Bob", 0 );
			std::cout << test;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl; }
	}
	else if (atoi( argv[1] ) == 2) {
		Bureaucrat	test("George", 2 );
		try {
			test.incrGrade();
			std::cout << test;
			test.incrGrade();
			std::cout << test;
			test.incrGrade();
			std::cout << test;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl; }
	}
	else if (atoi( argv[1] ) == 3) {
		Bureaucrat	test("George", 149 );
		try {
			test.decrGrade();
			std::cout << test;
			test.decrGrade();
			std::cout << test;
			test.decrGrade();
			std::cout << test;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl; }
	}
	return 0;
}

