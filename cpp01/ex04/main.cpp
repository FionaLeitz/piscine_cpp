#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	old;
	std::ofstream	rep;
	std::string		tmp;
	std::string		old_str = argv[2];
	std::string		rep_str = argv[3];
	int				i;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	tmp = argv[1];
	tmp += ".replace";
	old.open(argv[1]);
	if (old.is_open() == false)
	{
		std::cout << "Wrong input file" << std::endl;
		return 1;
	}
	rep.open(tmp);
	tmp.clear();
	std::getline(old, tmp, (char)EOF);
	i = tmp.find(old_str, 0);
	for (; tmp.npos != i; i = tmp.find(old_str, i))
	{
		tmp.replace(i, old_str.size(), rep_str);
		i += rep_str.size();
	}
	rep << tmp;
	old.close();
	rep.close();
	return 0;
}