#include "../headers/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) : _error( -1 ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & value ) : _date( value.getDate() ), _nbr( value.getNbr() ), _input( value.getInput() ),  _error( value.getError() ) {}

BitcoinExchange::BitcoinExchange( std::string input ) : _input( input ), _error( 0 ) {
	this->check_input();
	if ( this->_input.size() >= 11 )
		this->_input[10] = '\0';
	this->_date = this->_input;
	this->_nbr = 0;
	if (this->_input.size() >= 14 )
		this->_nbr = atof( &this->_input.c_str()[13] );
}

BitcoinExchange::~BitcoinExchange( void ) {}

BitcoinExchange &	BitcoinExchange::operator=( const BitcoinExchange & rhs ) {
	this->_date = rhs.getDate();
	this->_nbr = rhs.getNbr();
	this->_input = rhs.getInput();
	this->_error = rhs.getError();
	return *this;
}

void	BitcoinExchange::check_input( void ) {
	//check empty line
	if ( this->_input.size() == 0 ) {
		this->_error = ERROR_EMPTY;
		return ;
	}

	// check format (year-month-day | number)
	if ( this->_input.size() < 14 || this->_input[4] != '-' || this->_input[7] != '-' || this->_input[10] != ' ' || this->_input[11] != '|' || this->_input[12] != ' ' ) {
		this->_error = ERROR_FORMAT;
		return ;
	}

	// check year
	int	i;
	for ( i = 0; isdigit( this->_input[i] ) != 0; i++ );
	if ( i != 4 ) {
		this->_error = ERROR_YEAR;
		return ;
	}

	// check month
	if ( this->_input[++i] != '0' && this->_input[i] != '1' ) {
		this->_error = ERROR_MONTH;
		return ;
	}
	if ( isdigit( this->_input[++i] ) == 0 ) {
		this->_error = ERROR_MONTH;
		return ;
	}
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '1' && ( this->_input[i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' ) ) ) {
		this->_error = ERROR_MONTH;
		return ;
	}

	// check day
	i++;
	if ( this->_input[++i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' && this->_input[i] != '3' ) {
		this->_error = ERROR_DAY;
		return ;
	}
	if ( isdigit( _input[++i] ) == 0 ) {
		this->_error = ERROR_DAY;
		return ;
	}
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '3' && ( this->_input[i] != '0' && this->_input[i] != '1' ) ) ) {
		this->_error = ERROR_DAY;
		return ;
	}

	// check number
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
	if ( i != (int)this->_input.size() ) {
		this->_error = ERROR_NUMBER;
		return ;
	}
	if ( count > 4 ) {
		this->_error = ERROR_BIG_NUMBER;
		return ;
	}

	return ;
}

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
