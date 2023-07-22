#include "bank_account.h"

int main()
{
    using namespace std;

    BankAccount bk("zhouyu", "yumaodanzia", 1000);
    bk.show();
    bk.deposit(2000);
    bk.show();
    bk.withdraw(5000);
    bk.show();
    return 0;
}