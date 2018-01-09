
#include <iostream>
#include <ctime>
#include "Account.class.hpp"

int     Account::getNbAccounts( void ){

    return Account::_nbAccounts;
}

int     Account::getTotalAmount( void ){

    return Account::_totalAmount;
}

int     Account::getNbDeposits( void ){

    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals( void ){

    return Account::_totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void ){


    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;

}

// Constructor______________________________________________
Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

    this->_accountIndex = Account::_nbAccounts;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" <<this->checkAmount() << ";";
    std::cout << "created" << std::endl;    
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    return ;
}

// Destructor_____________________________________________
Account::~Account( void ){

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" <<this->checkAmount() << ";";
    std::cout << "closed" << std::endl;    
    Account::_totalAmount -= this->checkAmount();//CHECK BEFORE SUBMIT
    Account::_nbAccounts -= 1;//NOT SURE IF CORRECT???????????????????????????????????
    return ;
}

void    Account::makeDeposit( int deposit ){
        
        this->_nbDeposits += 1;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->checkAmount() << ";";
        std::cout << "deposit:" << deposit << ";";
        this->_amount = this->checkAmount() + deposit;
        std::cout << "amount:" << this->checkAmount() << ";";
        std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
        Account::_totalAmount += deposit;
        Account::_totalNbDeposits += 1;
}

bool    Account::makeWithdrawal( int withdrawal ){
    
    if (this->_amount - withdrawal >= 0){
        this->_nbWithdrawals += 1;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";";
        std::cout << "p_amount:" << this->checkAmount() << ";";
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount = this->checkAmount() - withdrawal;
        std::cout << "amount:" << this->checkAmount() << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        return 1;
    }
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "withdrawal:refused" << std::endl;
    return 0;
}

int     Account::checkAmount( void ) const {

    return this->_amount;
}

void    Account::displayStatus( void ) const {

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" <<this->checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;

}

void    Account::_displayTimestamp( void ){

    std::time_t t = std::time(nullptr);
    char    YMD_str[50];
    char    HMS_str[50];
    std::strftime(YMD_str, sizeof(YMD_str), "%Y%m%d", std::localtime(&t));
    std::strftime(HMS_str, sizeof(HMS_str), "%H%M%S", std::localtime(&t));
    std::cout << "[" << YMD_str << "_" << HMS_str << "] ";

}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
