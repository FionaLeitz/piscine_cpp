#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <map>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
class	BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & value );
		BitcoinExchange( std::string input );
		~BitcoinExchange( void );

		BitcoinExchange &		operator=( const BitcoinExchange & rhs );

		void					check_input( void );
		// void					parse( void );


		std::string					getDate( void ) const;
		float						getNbr( void ) const;
		std::string					getInput( void ) const;
		int							getError( void ) const;

	private:
		std::string			_date;
		float				_nbr;
		std::string			_input;
		int					_error;
};

#endif
