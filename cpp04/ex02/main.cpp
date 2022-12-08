/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:26:53 by fleitz            #+#    #+#             */
/*   Updated: 2022/12/08 10:26:54 by fleitz           ###   ########.fr       */
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

		Dog	Chaplin;
	}
	// {
	// 	std::cout << std::endl;
	// 	AAnimal	test;
	// }

	return 0;
}
