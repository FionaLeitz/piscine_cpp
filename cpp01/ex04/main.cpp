#include <iostream>
#include <fstream>

void	ft_replace(std::string filename, char **arg, std::string tmp) {
	int				count_tmp;
	int				save_count;
	std::string		old_str = arg[0];
	std::string		new_str= arg[1];
	std::ofstream	new_file;

	new_file.open(filename);
	count_tmp = 0;
	save_count = 0;
	count_tmp = tmp.find(old_str, count_tmp);
	while (count_tmp != tmp.npos)
	{
		new_file << tmp.substr(save_count, count_tmp - save_count) << new_str;
		count_tmp += old_str.size();
		save_count = count_tmp;
		count_tmp = tmp.find(old_str, count_tmp);
	}
	new_file << tmp.substr(save_count, count_tmp - save_count);
	new_file.close();
	return ;
}

int	main(int argc, char **argv)
{
	std::ifstream	old_file;
	std::string		tmp;
	std::string		filename;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	filename = argv[1];
	filename += ".replace";
	old_file.open(argv[1]);
	if (old_file.is_open() == false)
	{
		std::cout << "Wrong input file" << std::endl;
		return 1;
	}
	std::getline(old_file, tmp, (char)EOF);
	old_file.close();
	ft_replace(filename, &argv[2], tmp);
	return 0;
}