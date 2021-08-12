#include "Header.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount() : customer_name("Zane Anglin"), account_number(12345678), account_balance(10)
{
}
BankAccount::BankAccount(string name, int account, double balance) : customer_name(name), account_number(account), account_balance(balance)
{
}
double BankAccount::getBalance() { return account_balance; }
bool BankAccount::deposit(double amount)
{
	bool myStatus;
	if (amount <= 0)
	{
		cout << "Invalid amount, must be a deposit above zero." << endl;
		myStatus = false;
	}
	else
	{
		cout << "Success." << endl;
		account_balance += amount;
		myStatus = true;
	}
	return myStatus;
}
bool BankAccount::withdraw(double amount)
{
	bool myStatus;
	if (account_balance - amount < 0)
	{
		cout << "Invalid amount, cannot overdraw.";
		myStatus = false;
	}
	else
	{
		cout << "Success." << endl;
		account_balance -= amount;
		myStatus = true;
	}
	return myStatus;
}
void BankAccount::showAccountInfo()
{
	cout << "*****Account Info*****" << endl;
	cout << "Name: " << customer_name << endl;
	cout << "Account Number: " << account_number << endl;
	cout << "Account Balance: " << account_balance << endl;
}
