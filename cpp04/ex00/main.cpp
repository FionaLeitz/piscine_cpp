#include "headers/Cat.hpp"
#include "headers/Dog.hpp"
#include "headers/WrongCat.hpp"

int	main( void ) {
	{
		Animal test;
		std::cout << "This is " << test.getType() << std::endl;
		test.makeSound();
	}
	std::cout << std::endl;
	{
		Cat		Houdini;
		std::cout << "This is a " << Houdini.getType() << std::endl;
		Houdini.makeSound();
	}
	std::cout << std::endl;
	{
		Dog		Chaplin;
		std::cout << "This is a " << Chaplin.getType() << std::endl;
		Chaplin.makeSound();
	}
	std::cout << std::endl;
	{
		const	Animal* meta = new Animal();
		const	Animal* j = new Dog();
		const	Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const	WrongAnimal* meta = new WrongAnimal();
		const	WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		meta->makeSound();
		delete meta;
		delete i;
	}
	return 0;
}