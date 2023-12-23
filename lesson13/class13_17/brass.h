#ifndef BRASS_H_
#define BRASS_H_

class Brass
{
private:
    enum {MAX = 35};
    char fullName[MAX];
    long acctNum;
    double balance;
public:
    Brass(const char *s = "Nullbody", long an = -1,
            double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance()const;
    virtual void ViewAcct()const;
    virtual ~Brass() {}
};

class Brassplus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    Brassplus(const char *s = "Nullbody", long an = -1,
            double bal = 0.0, double m1 = 500,
            double r = 0.10);
    Brassplus(const Brass & ba, double m1 = 500, double r = 0.1);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetOwes() { owesBank = 0; }
};

#endif