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
		Form	test("Test", 12, 13);
		std::cout << test << std::endl;
	}
	return 0;
}

