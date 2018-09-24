
#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
	//Default Constructor
	Bank();

	//Overload Constructor
	Bank(string, int, double );

	//Destructor
	~Bank();

	//Accessor Function
	string getName() const;
		// getName = returns name of user
		// @return string = name of user
	int getAccountNumber() const;
		// getAccountNumber = returns account number of user
		// @return int = account number of user
	double getBalance() const;
		// getBalance = returns balance of user
		// @return double = balance of user

	//Mutator Function

	void setName(string);
		//setName = sets name of user
		// @param string name of user

	void setAccountNumber(int);
		//setAccountNumber = sets account number of user
		// @param int = account number of user

	void setBalance(double);
		//setBalance = set balance of user
		// @param double = balance of user

	void withdraw(double);

	void depoist(double);

	static void printBankInfo();

private:
	//Member variable
	string name;
	int accountNumber;
	double balance;

	static int totalAccounts;
	static double bankBalance;

};

#endif
