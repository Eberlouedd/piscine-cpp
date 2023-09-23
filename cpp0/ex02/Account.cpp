/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:57:25 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/23 22:37:06 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0), _accountIndex(Account::_nbAccounts)
{
	std::cout << "index:" << _nbAccounts << ";amounts:" << _amount << "created;\n";
	Account::_nbAccounts++;
}

int Account::getNbAccounts()
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if(_amount - withdrawal >= 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amounts:" << _amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << ";amount:" << _amount << ";nb_withdrawals\n" << _nbWithdrawals;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amounts:" << _amount << ";withdrawal: refused\n";
		return (false);
	}
}

void	Account::makeDeposit( int deposit )
{

	_amount += deposit;
	Account::_totalNbDeposits++;
	_nbDeposits++;
}

int		Account::checkAmount() const
{
	return _amount;
}

void	Account::displayAccountsInfos()
{
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}