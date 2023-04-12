#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

void	operation( char c, std::stack<int> *operand ) {

	if ( (*operand).size() < 2 )
		throw std::invalid_argument( "Error" );

	int	a = (*operand).top();
	(*operand).pop();
	int	b = (*operand).top();
	(*operand).pop();

	if ( c == '+' )
		(*operand).push( a + b );
	else if ( c == '-' )
		(*operand).push( b - a );
	else if ( c == '/' ) {
		if ( a == 0 )
			throw std::invalid_argument( "Error, dividing per 0" );
		(*operand).push( b / a );
	}
	else if ( c == '*' )
		(*operand).push( a * b );

	return ;
}

int	istoken( char c ) {
	if ( c == '+' || c == '-' || c == '/' || c == '*' )
		return 1;
	return 0;
}

int	isnumber( int *count, char *str ) {
	if ( str[*count] == '-' || str[*count] == '+' ) {
		if ( isdigit( str[*count + 1] ) != 0 ) {
			return 1;
		}
	}
	if ( isdigit( str[*count] ) != 0 ) {
		return 1;
	}
	return 0;
}

void	calcul( char *str, std::stack<int> *operand ) {
	int	count = 0;
	char	nbr[3];
	nbr[2] = '\0';

	while ( str[count] != '\0' ) {
		if ( isnumber( &count, str ) == 1 ) {
			nbr[0] = str[count];
			if ( isdigit( nbr[0] ) == 0 ) {
				nbr[1] = str[++count];
			}
			(*operand).push( atoi( nbr ) );
			nbr[1] = '\0';
		}
		else if ( istoken( str[count] ) != 0 ) {
			operation( str[count], operand );
		}
		else if ( str[count] != ' ' )
			throw std::invalid_argument( "Error" );
		count++;
	}

	if ( (*operand).size() != 1 )
		throw std::invalid_argument( "Error" );

	return ;
}

int	main( int argc, char **argv ) {
	std::stack<int>	operand;

	if ( argc != 2 ) {
		std::cout << "Error: wrong number of argument, one needed." << std::endl;
		return 1;
	}
	
	try {
		calcul( argv[1], &operand );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
		return 1;
	}

	std::cout << operand.top() << std::endl; 
	return 0;
}