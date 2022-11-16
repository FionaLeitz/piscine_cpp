#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	// std::string	str;

	if (argc == 1)
	{
		std::cout << "Is Harl Ok ?" << std::endl;
		return 1;
	}
	// str = argv[1];
	harl.complain(argv[1]);
	return 0;
}