#include "../headers/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) : _error( -1 ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & value ) : _date( value.getDate() ), _nbr( value.getNbr() ), _input( value.getInput() ),  _error( value.getError() ) {}

BitcoinExchange::BitcoinExchange( std::string input ) : _input( input ), _error( 0 ) {
	this->check_input();
}

BitcoinExchange::~BitcoinExchange( void ) {}

BitcoinExchange &	BitcoinExchange::operator=( const BitcoinExchange & rhs ) {
	this->_date = rhs.getDate();
	this->_nbr = rhs.getNbr();
	this->_input = rhs.getInput();
	this->_error = rhs.getError();
	return *this;
}

//	2011-01-03 | 3
void	BitcoinExchange::check_input( void ) {
	// d'abord, checker les tirets, les espaces et le pipe
	if ( this->_input.size() < 14 || this->_input[4] != '-' || this->_input[7] != '-' || this->_input[10] != ' ' || this->_input[11] != '|' || this->_input[12] != ' ' ) {
		this->_error = 1;
		return ;
	}
	// puis checker l'annee
	int	i;
	for ( i = 0; isdigit( this->_input[i] ) != 0; i++ );
	if ( i != 4 ) {
		this->_error = 2;
		return ;
	}
	// checker le mois
	if ( this->_input[++i] != '0' && this->_input[i] != '1' ) {
		this->_error = 3;
		return ;
	}
	if ( isdigit( this->_input[++i] ) != 0 ) {
		this->_error = 3;
		return ;
	}
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '1' && ( this->_input[i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' ) ) ) {
		this->_error = 3;
		return ;
	}
	// checker le jour
	if ( this->_input[++i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' && this->_input[i] != '3' ) {
		this->_error = 4;
		return ;
	}
	if ( isdigit( _input[++i] ) != 0 ) {
		this->_error = 4;
		return ;
	}
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '3' && ( this->_input[i] != '0' && this->_input[i] != '1' ) ) ) {
		this->_error = 4;
		return ;
	}
	// checker le nombre
	i = 13;
	if (this->_input[i] == '+')
		i++;
	int	count = 0;
	int	point = 0;
	for ( ; isdigit( this->_input[i] ) != 0 || ( this->_input[i] == '.' && point == 0 ); i++ ) {
		count++;
		if ( this->_input[i] == '.' )
			point++;
	}
	if ( i != (int)this->_input.size() || count > 4 || count == 0 ) {
		this->_error = 5;
		return ;
	}
	this->_input[10] = '\0';
	this->_date = this->_input;
	this->_nbr = atof( &this->_input.c_str()[13] );
	return ;
}

// void	BitcointExchange::parse( void ) {


// 	return ;
// }

std::string	BitcoinExchange::getDate( void ) const {
	return this->_date;
}

float	BitcoinExchange::getNbr( void ) const {
	return this->_nbr;
}

std::string	BitcoinExchange::getInput( void ) const {
	return this->_input;
}

int	BitcoinExchange::getError( void ) const {
	return this->_error;
}
