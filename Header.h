#include <string>
using std::string;
class BankAccount
{
private:
	string customer_name;
	int account_number;
	double account_balance;
public:
	BankAccount();
	BankAccount(string name, int account, double balance);
	double getBalance();
	bool deposit(double amount);
	bool withdraw(double amount);
	void showAccountInfo();
};
