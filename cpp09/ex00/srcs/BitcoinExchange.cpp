#include "../headers/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) : _error( -1 ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & value ) : _date( value.getDate() ), _nbr( value.getNbr() ), _input( value.getInput() ),  _error( value.getError() ) {}

BitcoinExchange::BitcoinExchange( std::string input ) : _input( input ), _error( 0 ) {
	_error = this->check_input();
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

int	BitcoinExchange::check_input( void ) {
	//check empty line
	if ( this->_input.size() == 0 )
		return ERROR_EMPTY;

	// check format (year-month-day | number)
	if ( this->_input.size() < 14 || this->_input[4] != '-' || this->_input[7] != '-' || this->_input[10] != ' ' || this->_input[11] != '|' || this->_input[12] != ' ' )
		return ERROR_FORMAT;

	// check year
	int	i;
	for ( i = 0; isdigit( this->_input[i] ) != 0; i++ );
	if ( i != 4 )
		return ERROR_YEAR;

	// check month
	if ( this->_input[++i] != '0' && this->_input[i] != '1' )
		return ERROR_MONTH;
	if ( isdigit( this->_input[++i] ) == 0 )
		return ERROR_MONTH;
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '1' && ( this->_input[i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' ) ) )
		return ERROR_MONTH;

	// check day
	i++;
	if ( this->_input[++i] != '0' && this->_input[i] != '1' && this->_input[i] != '2' && this->_input[i] != '3' )
		return ERROR_DAY;
	if ( isdigit( _input[++i] ) == 0 )
		return ERROR_DAY;
	if ( ( this->_input[i - 1] == '0' && this->_input[i] == '0' ) || ( this->_input[i - 1] == '3' && ( this->_input[i] != '0' && this->_input[i] != '1' ) ) )
		return ERROR_DAY;

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
	if ( i != (int)this->_input.size() )
		return ERROR_NUMBER;
	if ( count > 4 )
		return ERROR_BIG_NUMBER;

	return 0;
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
