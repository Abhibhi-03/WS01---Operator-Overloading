//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
// InvestmentAccount.cpp - function definitions for an investment account
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

InvestmentAccount::InvestmentAccount() {
	this->cash = 0;
	this->stocks = 0;
	this->name = "";
}

InvestmentAccount::InvestmentAccount(std::string _name, double cash) {
	this->name = _name;
	this->cash = cash;
	this->stocks = 0;
}

bool InvestmentAccount::PurchaseStocks(double amount) {
	bool success = true;
	if (this->cash < amount) {
		success = false;
	}
	else {
		this->cash -= amount;
		stocks += amount;
	}

	return success;
}

bool InvestmentAccount::SellStocks(double amount) {
	bool success = true;
	if (stocks < amount) {
		success = false;
	}
	else {
		this->cash += amount;
		stocks -= amount;
	}
	return success;
}

std::string InvestmentAccount::GetName() const {
	return this->name;
}

double InvestmentAccount::GetValue() const {
	double value = 0;
	value = this->cash + this->stocks;
	return value;
}

double InvestmentAccount::GetStocks() const {
	return this->stocks;
}

double InvestmentAccount::GetCash() const {
	return this-> cash;
}

//Implement the overload of the += operator
//This should add cash to the investment account
//If the amount to be added is negative, print out the error message "Invalid transaction"
//Do not forget the function prototype in the header file InvestmentAccount.h
InvestmentAccount& InvestmentAccount::operator+=(double _cash) {
	if (_cash < 0){
		cout << "Invalid Transaction";//printed only if cash is a negative value
	}
	else {
		this->cash += _cash;
	}
	return *this;
}


//Implement the overload of the -= operator
//This should withdraw cash from the investment account
//If the amount to be withdrawn is negative, print out the error message "Invalid transaction"
//If there isn't enough cash in the account, print out the error message "Not enough funds"
//Do not forget the function prototype in the header file InvestmentAccount.h
InvestmentAccount& InvestmentAccount::operator-=(double _cash) {
	if (_cash < 0) {
		cout << "Invalid Transaction";
	}
	if (_cash > cash) {
		cout << "Not Enough Funds in the Account for " << GetName() << "\n";
	}
	else {
		this->cash -= _cash;
	}
	return *this;
}


InvestmentAccount::~InvestmentAccount() {//wipe out all information
	this->cash = 0;
	this->stocks = 0;
	this->name = "";
}