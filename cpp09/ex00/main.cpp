#include <map>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

// probleme de string date et string number !! transmission d'information

int	check_date( std::string input, std::string date, std::string number ) {
	int	i;

	for ( i = 0; isdigit( input[i] ) != 0; i++ );
	if ( i != 4 )
	//	error year
		return 1;
	if ( input[i++] != '-' )
	// error format
		return 2;
	if ( input[i] == '0' && ( input[i + 1] == '0' || isdigit( input[i + 1] ) == 0 ) )
	// error month
		return 3;
	if ( input[i] == '1' && ( input[i + 1] != '0' && input[i + 1] != '1' && input[i + 1] != '2' ) )
	// error month
		return 3;
	if ( input[i++] != '0' && input[i] != '1' )
	// error month
		return 3;
	if ( input[++i] != '-' )
	// error format
		return 2;
	// gerer encore le numero du jour

	i += 3;

	// std::cout << &input.c_str()[i] << std::endl;
	if ( input[i++] != ' ' || input[i++] != '|' || input[i++] != ' ' )
	// error format
		return 2;

	if ( atoi( &input.c_str()[i] ) < 0 || atoi( &input.c_str()[i] ) > 100 )
	// error number
		return 4;
	if (input[i] == '+')
		i++;
	int	count = 0;
	for ( ; isdigit( input[i] ) != 0; i++ )
		count++;
	if ( i != (int)input.size() || count > 4 || count == 0 )
	// error number
		return 4;
	
	input[10] = '\0';
	date = input;
	number = &input.c_str()[13];
	return 0;
}

void	print( std::string str_date, std::string str_nbr, std::map<std::string, float> data ) {
	std::map<std::string, float>::iterator	it;
	it = data.find( str_date );
	if ( it == data.end() ) {
		it = data.lower_bound( str_date);
		it--;
	}
	std::cout << str_date << " => " << std::setprecision(7) << it->second << " = " << atoi( str_nbr.c_str() ) * it->second << std::endl;
	return ;
}

void	parse( char *filename, std::map<std::string, float> data ) {
	std::ifstream	input_file;
	std::string		tmp, str_date, str_nbr;
	int				error = 0;

	input_file.open( filename );
	while ( std::getline( input_file, tmp ) && tmp.size() != 0 ) {
		error = check_date( tmp, str_date, str_nbr );
		if ( error != 0 )
			std::cout << "Error number " << error << std::endl;
		else
			print( str_date, str_nbr, data );
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

	// std::map<std::string, float>::iterator it;
	// for ( it = data.begin(); it != data.end(); it++ )
	// 	std::cout << it->first << " => " << it->second << std::endl;

	return data;
}

int main( int argc, char **argv ) {
	std::map<std::string, float> data;

	if ( argc != 2 ) {
		std::cout << "Error: missing input file." << std::endl;
		return 1;
	}

	data = get_data( "data.csv" );


	parse( argv[1], data );

	// print( argv[1], argv[2], data );

	

}