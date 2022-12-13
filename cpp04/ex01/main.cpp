/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:23:44 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:26:37 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/Brain.hpp"

int	main( void ) {
	// {
	// 	Cat	Houdini;
	// 	Houdini.getBrain()->seeIdea( 0 );
	// 	Houdini.getBrain()->newIdea( "Je suis un chat" );
	// 	Houdini.getBrain()->seeIdea( 0 );
	// 	Houdini.getBrain()->newIdea( "J'ai tout le temps faim" );
	// 	Houdini.getBrain()->newIdea( "Miaou !" );
	// 	Houdini.getBrain()->newIdea( "Dodo" );
	// 	Houdini.getBrain()->newIdea( "Papouiiiiiille !" );
	// 	Houdini.getBrain()->seeIdea( 3 );
	// 	Houdini.getBrain()->forgetIdea( 2 );
	// 	Houdini.getBrain()->seeIdea( 3 );
	// 	std::cout << std::endl;
	// 	Cat test(Houdini);
	// 	std::cout << Houdini.getType() << std::endl;
	// 	std::cout << test.getType() << std::endl;
	// 	std::cout << "test 1 : ";
	// 	test.getBrain()->seeIdea(0);
	// 	test.getBrain()->forgetIdea( 0 );
	// 	std::cout << "test 2 : ";
	// 	test.getBrain()->seeIdea(0);
	// 	std::cout << "Houdini : ";
	// 	Houdini.getBrain()->seeIdea( 0 );
	// 	std::cout << std::endl;
	// 	Cat	test2 = test;
	// 	std::cout << test2.getType() << std::endl;
	// 	test2.getBrain()->seeIdea(0);
	// 	test2.getBrain()->forgetIdea( 0 );
	// 	test2.getBrain()->seeIdea(0);
	// 	test.getBrain()->seeIdea(0);
	// 	std::cout << std::endl;
	// }

	std::cout << std::endl;
	{
		const Animal* Chaplin = new Dog();
		const Animal* Houdini = new Cat();
		std::cout << "Houdini is a " << Houdini->getType() << std::endl;
		std::cout << "Chaplin is a " << Chaplin->getType() << std::endl;
		delete Houdini;
		delete Chaplin;
	}

	// std::cout << std::endl << "===== Le tableau =====" << std::endl;
	// {
	// 	int i;
	// 	Animal	*tab[100];
	// 	for ( i = 0; i < 100; i++)
	// 	{
	// 		if ( i < 50)
	// 			tab[i] = new Dog();
	// 		else
	// 			tab[i] = new Cat();
	// 	}

	// 	std::cout << std::endl;

	// 	for ( i = 0; i < 100; i++ )
	// 		delete tab[i];
	// }
	return 0;
}
