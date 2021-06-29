#include "Account.hpp"

Account::Account( int initial_deposit ): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = getNbAccounts();
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;    
}

Account::Account(void): _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = getNbAccounts();
}

Account::~Account(void)
{

}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
    
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
    
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
    
}
void	Account::displayAccountsInfos( void )
{

}

void	Account::_displayTimestamp( void )
{
    std::cout << "[19920104_091532] ";
}

void	Account::makeDeposit( int deposit )
{
    _totalNbDeposits++;
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal <= _amount)
    {
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        return true;
    }
    else
        return false;

}

int		Account::checkAmount( void ) const
{
    return 0;
}

void	Account::displayStatus( void ) const
{

}

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
