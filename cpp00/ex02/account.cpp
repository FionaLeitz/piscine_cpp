#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
 //	this->_totalAmount += this->_amount;
	this->_totalAmount += this->checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";created";
	std::cout << std::endl;
	this->_nbAccounts++;
	return ;
}

Account::Account( void ) {
	return ;
}

Account::~Account( void ) {
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";closed";
	std::cout << std::endl;
	return ;
}
int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}


void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return 0;
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	return 1;
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(NULL);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900);
	if (now->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << (now->tm_mon + 1);
	if (now->tm_mday < 10)
		std::cout << "0";
	std::cout << now->tm_mday << "_";
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "] ";
	return ;
}
