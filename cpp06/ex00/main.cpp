#include <iostream>
#include <string>

bool	checkspec( char *string ) {
	std::string	str(string);
	if (str == "nanf" || str == "-inff" || str == "+inff" ||
		str == "nan" || str == "-inf" || str == "+inf")
		return true;
	return false;
}

int	main( int argc, char **argv ) {
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Error" << std::endl << "Needing one argument and only one" << std::endl;
		return 1;
	}
	if ( !checkspec(argv[1]) )
	{
		std::cout << "Litteral is not a special one." << std::endl;
	}
	else
		std::cout << "Litteral is a special one !" << std::endl;
	return 0;
}
