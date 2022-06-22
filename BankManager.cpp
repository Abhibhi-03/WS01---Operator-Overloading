//I have done all the coding by myselfand only copied the code that my professor provided to complete my workshopsand assignments.
//BankManager.cpp - function definitions for a bank manager
//Abhi Nileshkumar Patel
//apatel477@myseneca.ca
//150046217
//SEP 200 WS01
//Date: 05/27/2022
//=======================

#include <iostream>
#include "BankManager.h"
#include "InvestmentAccount.h"

using namespace std;

BankManager::BankManager() {
	name = "";
	branchNumber = 0;
	employeeNumber = 0;
}

BankManager::BankManager(std::string name, int branch, int employee) {
	this->name = name;
	branchNumber = branch;
	employeeNumber = employee;
}

void BankManager::OverrideName(InvestmentAccount& account, std::string name) {
	account.name = name;
}

void BankManager::AddCash(InvestmentAccount& account, double cash) {
	account += cash;//take advantage of the overloaded operator += for InvestmentAccount
}

void BankManager::RemoveCash(InvestmentAccount& account, double cash) {
	account -= cash;//take advantage of the overloaded operator -= for InvestmentAccount
}

std::ostream& BankManager::PrintReport(InvestmentAccount& account) const {
	cout << account.name << " has $" << account.stocks << " in stocks and $" << account.cash << " in cash.";
	return cout;
}

BankManager::~BankManager() {
	name = "";
	branchNumber = 0;
	employeeNumber = 0;
}

//Implement the overloading of the == operator
//where true is returned if the names of the investment accounts are the same, false otherwise
//Do not forget the function prototype in the header file BankManager.h
bool operator==(InvestmentAccount& account1, InvestmentAccount& account2) {
	return account1.GetName() == account2.GetName();//true is returned only if names are same
}


