#include "Account.hpp"

Account::Account( int initial_deposit ): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = getNbAccounts();
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::Account(void): _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _accountIndex = getNbAccounts();
}

Account::~Account(void)
{
    _displayTimestamp();
     _nbAccounts--;
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";closed";
    if (_nbAccounts)
        std::cout << std::endl;
    _totalAmount -= _amount;
    _totalNbDeposits -= _nbDeposits;
    _totalNbWithdrawals -= _nbWithdrawals;
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
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;    

}

void	Account::_displayTimestamp( void )
{
    std::cout << "[19920104_091532] ";
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;    
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (withdrawal <= _amount)
    {
        std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;    
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        return true;
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";withdrawal:refused" << std::endl;    
        return false;
    }  

}

int		Account::checkAmount( void ) const
{
    return 0;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;    
}

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
