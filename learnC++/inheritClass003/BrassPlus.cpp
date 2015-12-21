#include "BrassPlus.h"
typedef std::ios_base::fmtflags format;
typedef std::streamsize precies;
format setFormat();
void restore(format f, precies p);

BrassPlus::BrassPlus()
{
    //ctor
    new (this)BrassPlus("noName", 0, 0.0, 1000, 0.01);
}
BrassPlus::BrassPlus(const string fullName, long long acctNum, double balance, double maxLoan, double rate) {
    Brass(fullName, acctNum, balance);
    this->maxLoan = maxLoan;
    this->rate = rate;
}

BrassPlus::BrassPlus(const Brass brass, double maxLoan, double rate): Brass(brass) {
    this->maxLoan = maxLoan;
    this->rate = rate;
}

BrassPlus::~BrassPlus()
{
    //dtor
}

void BrassPlus::viewAcct() const {

    // set up ###.## format
    format initialState = setFormat();
    precies prec = cout.precision(2);

    Brass::viewAcct(); // brass
    cout << "Max loan: " << maxLoan << endl;
    cout << "Owes Bank: " << owesBank << endl;
    // set up ###.### format
    prec = cout.precision(3);
    cout << "The rate: " << rate << endl;

    restore(initialState, prec);
}

void BrassPlus::withDraw(double amt) {

    // set up ###.## format
    format initialState = setFormat();
    precies prec = cout.precision(2);

    double temp;

    if (amt < 0) {
        cout << "can not withdraw litter than 0!";
    } else if (amt <= getBalance()) {
        Brass::withDraw(amt);
    } else {
        if (amt < getBalance() + maxLoan - owesBank) {
            temp = amt - getBalance();
            owesBank += temp * (1 + rate);
            deposit(temp);
            Brass::withDraw(amt);
        } else {
            cout << "your balance and loan is litter than withdraw!" << endl;
        }
    }

    restore(initialState, prec);
}

void BrassPlus::resetMax(double maxLoan) {
    this->maxLoan = maxLoan;
}

void BrassPlus::resetRate(double rate){
    this->rate = rate;
}

void BrassPlus::resetOwes() {
    owesBank = 0;
}
