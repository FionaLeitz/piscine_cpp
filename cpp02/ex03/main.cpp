/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:24 by fleitz            #+#    #+#             */
/*   Updated: 2022/11/28 16:51:05 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main( int argc, char **argv ) {
	if (argc != 2)
		return 1;
	Point const	a( 1, 1 );
	Point const	c( 1, 4 );
	Point const	b( 5, 1 );
	if (atoi(argv[1]) == 1)
	{
		Point const	point( 2, 2 );
		std::cout << "===== OUI =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 2)
	{
		Point const	point( -1.5, -1.5 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 3)
	{
		Point const	point( 4, 5 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 4)
	{
		Point const	point( 0.35f, 3.6 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 5)
	{
		Point const	point( 3.6, 0.35f );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 6)
	{
		Point const	point( 2.5, 3 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 7)
	{
		Point const	point( 2.5, 2 );
		std::cout << "===== OUI =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 8)
	{
		Point const	point( 1, 1 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	else if (atoi(argv[1]) == 9)
	{
		Point const	point( 2, 1 );
		std::cout << "===== NON =====" << std::endl;

		if (bsp( a, b, c, point ))
			std::cout << "On est dans le triangle" << std::endl;
		else
			std::cout << "On n'est pas dans le triangle" << std::endl;
	}
	return 0;
}
