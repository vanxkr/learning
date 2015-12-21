#ifndef BRASSPLUS_H
#define BRASSPLUS_H

#include <iostream>
#include <string>

#include "Brass.h"

using namespace std;

class BrassPlus: public Brass
{
    public:
        BrassPlus();
        BrassPlus(const string fullName, long long acctNum, double balance, double maxLoan, double rate);
        BrassPlus(const Brass brass, double maxLoan, double rate);
        virtual ~BrassPlus();

        virtual void viewAcct() const;
        virtual void withDraw(double amt);
        void resetMax(double maxLoan);
        void resetRate(double rate);
        void resetOwes();


    protected:
    private:
        double maxLoan;
        double rate;
        double owesBank;
};

#endif // BRASSPLUS_H
