#include "Brass.h"
typedef std::ios_base::fmtflags format;
typedef std::streamsize precies;
format setFormat();
void restore(format f, precies p);
Brass::Brass()
{
    //ctor
    new (this)Brass("noName", 0, 0);
}

Brass::Brass(const string fullName, long long acctNum, double balance) {
    this->fullName = fullName;
    this->acctNum = acctNum;
    this->balance = balance;
}

Brass::~Brass()
{
    //dtor
}

void Brass::deposit(double amt) {
    if (amt > 0) {
        balance += amt;
    } else {
        cout << "can not deposit litter than 0!" << endl;
    }
}

void Brass::withDraw(double amt) {

    // set up ###.## format
    format initialState = setFormat();
    precies prec = cout.precision(2);

    if (amt < 0) {
        cout << "can not withdraw litter than 0!";
    } else if (amt <= balance) {
        balance -= amt;
    } else {
        cout << "your balance is litter than withdraw!" << endl;
    }

    restore(initialState, prec);
}

double Brass::getBalance() const {
    return balance;
}

void Brass::viewAcct() const {

    // set up ###.## format
    format initialState = setFormat();
    precies prec = cout.precision(2);

    cout << "fullName: " << fullName << endl;
    cout << "acctNum: " << acctNum << endl;
    cout << "balance: " << balance << endl;

    restore(initialState, prec);
}

format setFormat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precies p) {
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}
