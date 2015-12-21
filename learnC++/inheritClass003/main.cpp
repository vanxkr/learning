#include <iostream>
#include "Brass.h"
#include "BrassPlus.h"

using namespace std;

int main()
{
    Brass brass;
    brass.viewAcct();
    cout << "****************************" << endl;
    brass.deposit(10111100.999);
    brass.viewAcct();
    cout << "****************************" << endl;
    brass.withDraw(999.999);
    brass.viewAcct();
    cout << "****************************" << endl;
    BrassPlus brassPlus;
    brassPlus.viewAcct();
    cout << "****************************" << endl;
    brassPlus.deposit(1000000.999);
    brassPlus.viewAcct();
    cout << "****************************" << endl;
    brassPlus.withDraw(999999);
    brassPlus.viewAcct();
    cout << "****************************" << endl;
    brassPlus.withDraw(999);
    brassPlus.viewAcct();
    cout << "****************************" << endl;

    return 0;
}
