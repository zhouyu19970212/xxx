#include <iostream>
#include <string>
#include "bank_account.h"

using namespace std;

BankAccount::BankAccount() {}

BankAccount::BankAccount(std::string user_name,
                        std::string account,
                        double amount)
{
    this->user_name = user_name;
    this->account = account;
    this->amount = amount;
}

void BankAccount::show()
{
    cout << "user name: " << user_name
    << ", account: " << account << ", amount: "
    << amount << endl;
}
void BankAccount::deposit(double money)
{
    amount += money;
}

void BankAccount::withdraw(double money)
{
    if (money < 0) 
    {
        cout << "money is not allowed to less than 0" << endl;
        return;
    }
    amount -= money;
}