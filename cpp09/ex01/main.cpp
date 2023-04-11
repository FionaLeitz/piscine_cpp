#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

void	operation( char c, std::stack<int> operand ) {

	// if ( operand.size() < 2 )
	// 	throw( "Error" );
	int	a = operand.top();
	operand.pop();
	int	b = operand.top();
	operand.pop();

	if ( c == '+' )
		operand.push( a + b );
	else if ( c == '-' )
		operand.push( a - b );
	else if ( c == '/' )
		operand.push( a / b );
	else if ( c == '*' )
		operand.push( a * b );

	return ;
}

int	istoken( char c ) {
	if ( c == '+' || c == '-' || c == '/' || c == '*' )
		return 1;
	return 0;
}

void	calcul( char *str, std::stack<int> *operand ) {
	int	count = 0;
	char	nbr[2];
	nbr[1] = '\0';

	while ( str[count] != '\0' ) {
		if ( isdigit(str[count]) != 0 ) {
			nbr[0] = str[count];
			(*operand).push( atoi( nbr ) );
			// if ( str[count] != ' ' )
			// 	throw( "Error" );
		}
		else if ( istoken( str[count] ) != 0 ) {
			operation( str[count], *operand );
		}
		count++;
	}

	std::cout << "TEST: " << (*operand).top() << std::endl; 
	return ;
}

int	main( int argc, char **argv ) {
	std::stack<int>	operand;

	if ( argc != 2 ) {
		std::cout << "Error: wrong number of argument, one needed." << std::endl;
		return 1;
	}
	
	// try {
	calcul( argv[1], &operand );
	// }
	// catch ( std::exception & e ) {
	// 	std::cout << e.what() << std::endl;
	// }

	std::cout << "FINAL: " << operand.top() << std::endl; 
	return 0;
}