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
	{
		Cat	Houdini;
		Houdini.getBrain()->seeIdea( 0 );
		Houdini.getBrain()->newIdea( "Je suis un chat" );
		Houdini.getBrain()->seeIdea( 0 );
		Houdini.getBrain()->newIdea( "J'ai tout le temps faim" );
		Houdini.getBrain()->newIdea( "Miaou !" );
		Houdini.getBrain()->newIdea( "Dodo" );
		Houdini.getBrain()->newIdea( "Papouiiiiiille !" );
		Houdini.getBrain()->seeIdea( 3 );
		Houdini.getBrain()->forgetIdea( 2 );
		Houdini.getBrain()->seeIdea( 3 );

		std::cout << std::endl;
	}
	{
		const Animal* Chaplin = new Dog();
		const Animal* Houdini = new Cat();



		delete Houdini;
		delete Chaplin;
	}
	std::cout << std::endl << "===== Le tableau =====" << std::endl;
	{

		int i;
		Animal	*tab[100];
		for ( i = 0; i < 100; i++)
		{
			if ( i < 50)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

		std::cout << std::endl;

		for ( i = 0; i < 100; i++ )
			delete tab[i];
	}
	return 0;
}
