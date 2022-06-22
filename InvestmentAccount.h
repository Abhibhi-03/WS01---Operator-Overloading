//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
// InvestmentAccount.h - class declaration for an investment account
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS01
//Date: 05/27/2022
//=======================

#ifndef _INVESTMENT_ACCOUNT_H
#define _INVESTMENT_ACCOUNT_H
#include <iostream>
#include "BankManager.h"

class InvestmentAccount {
	double cash;
	double stocks;
	std::string name;

public:
	friend class BankManager;
	InvestmentAccount();
	InvestmentAccount(std::string name, double cash);
	~InvestmentAccount();//wipe out all information
	bool PurchaseStocks(double amount);//stocks+=amount; this->cash-=amount;
	bool SellStocks(double amount);//stocks-=amount;cash+=amount
	std::string GetName() const;
	double GetValue() const;//cash+stocks;
	double GetStocks() const;//stocks
	double GetCash() const;//cash
	InvestmentAccount& operator+=(double _cash);//Adds cash
	InvestmentAccount& operator-=(double _cash);//Subtracts cash
};

#endif//_INVESTMENT_ACCOUNT_H