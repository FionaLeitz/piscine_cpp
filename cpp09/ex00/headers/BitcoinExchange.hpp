#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define ERROR_EMPTY 1
# define ERROR_FORMAT 2
# define ERROR_YEAR 3
# define ERROR_MONTH 4
# define ERROR_DAY 5
# define ERROR_NUMBER 6
# define ERROR_BIG_NUMBER 7

# include <map>
# include <fstream>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>

class	BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & value );
		BitcoinExchange( std::string input );
		~BitcoinExchange( void );

		BitcoinExchange &		operator=( const BitcoinExchange & rhs );

		int						check_input( void );

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
