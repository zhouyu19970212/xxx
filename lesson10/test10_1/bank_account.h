#ifndef BANK_ACCOUNT_
#define BANK_ACCOUNT_
#include <string>

class BankAccount
{
private:
    std::string user_name;
    std::string account;
    double amount;
public:
    BankAccount();
    BankAccount(std::string user_name,
                std::string account,
                double amount);
    void show();
    void deposit(double money);
    void withdraw(double money);
};


#endif