#include <iostream>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	BankAccount x;
	char choice;
	char selection;
	do
	{
		cout << "[1] Account Information\n" << "[2] Deposit\n" << "[3] Withdrawel\n" << "[4] Exit\n";
		cout << "Enter a selection: ";
		cin >> selection;
		switch (selection)
		{
		case'1':
			cout << fixed << setprecision(2);
			x.showAccountInfo();
			cout << x.getBalance();
			cout << "Add another Transaction? (Y/N) ";
			cin >> choice;
			break;
		case'2':
			double deposit;
			cout << "How much would you like to deposit? ";
			cin >> deposit;
			x.deposit(deposit);
			cout << "Add another Transaction? (Y/N) ";
			cin >> choice;
			break;
		case '3':
			double amount;
			cout << "How Much would you like to withdraw? ";
			cin >> amount;
			x.withdraw(amount);
			cout << "Add another Transaction? (Y/N) ";
			cin >> choice;
			break;
		case '4':
			cout << "Goodbye.";
			return 0;
			break;
		default:
			cout << "Invalid entry." << endl;
			cout << "Add another transaction? (Y/N) ";
			cin >> choice;
		}
	} while (choice == 'Y' || choice =='y');
	cout << "Goodbye.";
	return 0;
}

