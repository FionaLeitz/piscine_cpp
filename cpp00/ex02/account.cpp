#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( int initial_deposit ) {
	this->_displayTimestamp();
	return ;
}

Account::~Account( void ) {
	return ;
}

void	Account::_displayTimestamp( void ) {
	std::time_t test; 
	std::time( &test );
	std::cout << std::put_time( std::gmtime( &test ), "%c %Z" ) << std::endl;

	return ;
}

// static int	Account::getNbAccounts( void ) {

// 	return ;
// }

// static int	Account::getTotalAmount( void ) {

// 	return ;
// }

// static int	Account::getNbDeposits( void ) {

// 	return ;
// }

// static int	Account::getNbWithdrawals( void ) {

// 	return ;
// }

// static void	Account::displayAccountsInfos( void ) {

// 	return ;
// }

// void	Account::makeDeposit( int deposit ) {

// 	return ;
// }

// bool	Account::makeWithdrawal( int withdrawal ) {

// 	return ;
// }

// int		Account::checkAmount( void ) const {

// 	return ;
// }

// void	Account::displayStatus( void ) const {

// 	return ;
// }
