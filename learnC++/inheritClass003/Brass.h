#ifndef BRASS_H
#define BRASS_H

#include <iostream>
#include <string>

using namespace std;

class Brass
{
    public:
        Brass();
        Brass(const string fullName, long long acctNum, double balance);
        virtual ~Brass();

        virtual void withDraw(double amt);
        virtual void viewAcct() const;
        void deposit(double amt);
        double getBalance() const;

    protected:
    private:
        string fullName;
        long long acctNum;
        double balance;
};

#endif // BRASS_H
