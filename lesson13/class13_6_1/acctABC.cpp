#include <iostream>
#include <cstring>
using std::cout;
using std::ios_base;
using std::endl;

#include "acctabc.h"

AcctABC::AcctABC(const char *s, long an, double bal)
{
    std::strncpy(fullName, s, MAX - 1);
    fullName[MAX - 1] = '\0';
    acctNum = an;
    balance = bal;
}

void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}

