/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:50:39 by esylva            #+#    #+#             */
/*   Updated: 2022/04/14 11:50:39 by esylva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <chrono>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit): _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<< this->_amount << ";created"<<std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

int		Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() 	<< ";" 
		<< "total:" << Account::getTotalAmount() << ";" 
		<< "deposits:" << Account::getNbDeposits()<< ";" 
		<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit) 
{

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";";
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";"
		<< 	"amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << std::endl;
}


bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";" 
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";" 
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{

	char date[16];
	time_t t = time(0);
	struct tm *tm;

	tm = gmtime(&t);
	strftime(date, sizeof(date), "%Y%m%d_%H%M%S", tm);
	std::cout << "[" << date << "] ";
}

Account::Account(void) 
{

}
