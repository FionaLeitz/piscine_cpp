#include "headers/BitcoinExchange.hpp"

void	print( BitcoinExchange convert, std::map<std::string, float> data, int line ) {
	std::map<std::string, float>::iterator	it;

	switch ( convert.getError() )
	{
		case 1: {
			std::cout << "line " << line << " : Error: empty line." << std::endl;
			break ;
		}
		case 2: {
			std::cout << "line " << line << " : Error: bad format => " << convert.getInput() << "." << std::endl;
			break ;
		}
		case 3: {
			std::cout << "line " << line << " : Error: year not acceptable => " << convert.getDate().c_str() << "." << std::endl;
			break ;
		}
		case 4: {
			std::cout << "line " << line << " : Error: month not acceptable => " << convert.getDate().c_str() << "." << std::endl;
			break ;
		}
		case 5: {
			std::cout << "line " << line << " : Error: day not acceptable => " << convert.getDate().c_str() << "." << std::endl;
			break ;
		}
		case 6: {
			if ( convert.getNbr() < 0 )
				std::cout << "line " << line << " : Error: not a positive number." << std::endl;
			else
				std::cout << "line " << line << " : Error: number not acceptable." << std::endl;
			break ;
		}
		case 7: {
			std::cout << "line " << line << " : Error: too large a number." << std::endl;
			break ;
		}
		default: {
			it = data.find( convert.getDate() );
			if ( it == data.end() ) {
				it = data.lower_bound( convert.getDate());
				if ( it == data.begin() ) {
					std::cout << "line " << line << " : Error: no data before " << data.begin()->first << "." << std::endl;
					return ;
				}
				it--;
			}
			std::cout << "line " << line << " : " << convert.getDate().c_str() << " => " << std::setprecision(7) << it->second << " = " << convert.getNbr() * it->second << std::endl;
		}
	}

	return ;
}

void	parse( char *filename, std::map<std::string, float> data ) {
	std::ifstream	input_file;
	std::string		tmp;
	int				line = 2;

	input_file.open( filename );
	std::getline( input_file, tmp );
	if ( tmp != "date | value" )
	{
		BitcoinExchange	convert( tmp );
		print( convert, data, 1 );
	}
	while ( std::getline( input_file, tmp ) ) {
		BitcoinExchange convert( tmp );
		print( convert, data, line++ );
	}


	return ;
}

std::map<std::string, float>	get_data( const char *data_name ) {
	std::ifstream	data_file;
	std::string		tmp_key, tmp_value;
	std::map<std::string, float> data;

	data_file.open( data_name );

	while ( std::getline( data_file, tmp_key, ',' ) && tmp_key.size() != 0 ) {
		std::getline( data_file, tmp_value );
		data.insert( std::map<std::string, float>::value_type( tmp_key, atof( tmp_value.c_str() ) ) );
	}
	return data;
}

int main( int argc, char **argv ) {
	std::map<std::string, float>	data;

	if ( argc != 2 ) {
		std::cout << "Error: needing one argument." << std::endl;
		return 1;
	}

	data = get_data( "data.csv" );
	parse( argv[1], data );

	return 0;
}