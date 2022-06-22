//I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments.
//BankManager.h - class declaration for a bank manager
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS01
//Date: 05/27/2022
//=======================
#ifndef _BANK_MANAGER_H
#define _BANK_MANAGER_H
#include <iostream>
#include "InvestmentAccount.h"

class BankManager {
	std::string name;
	int branchNumber;
	int employeeNumber;
public:
	BankManager();
	BankManager(std::string name, int branch, int employee);
	~BankManager();
	void OverrideName(InvestmentAccount& account, std::string name);
	void AddCash(InvestmentAccount& account, double cash);
	void RemoveCash(InvestmentAccount& account, double cash);
	std::ostream& PrintReport(InvestmentAccount& account) const;
	

};
bool operator == (InvestmentAccount& account1, InvestmentAccount& account2);//operator overloading for boolean

#endif//_BANK_MANAGER_H