// string Input
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(void)
{

    // c char input
    char info[100];

    
    cout << "cin >> info;" << endl;
    cin >> info;
    cout << info << endl;

    getchar();
    cout << "cin.getline(info, 100);" << endl;
    cin.getline(info, 100);
    cout << info << endl;

    cout << "cin.get(info, 100);" << endl;
    cin.get(info, 100);
    cout << info << endl;

    // c++ string input
    string stuff;

    cout << "cin >> stuff;" << endl;
    cin >> stuff;
    cout << stuff << endl;

    getchar();
    cout << "getline(cin, stuff);" << endl;
    getline(cin, stuff);
    cout << stuff << endl;

    cout << "cin.getline(info, 100, ':');" << endl;
    cin.getline(info, 100, ':');
    cout << info << endl;

    //getline(stuff, ':');
    //cout << stuff << endl;
    
    // about length
    char fname[10];
    string lname;

    cout << "cin >> fname;" << endl;
    cin >> fname;
    cout << fname << endl;
    
    cout << "cin >> lname;" << endl;
    cin >> lname;
    cout << lname << endl;

    cout << "cin.getline(fname, 10);" << endl;
    cin.getline(fname, 10);
    cout << fname << endl;

    cout << "getline(cin, lname);" << endl;
    getline(cin, lname);
    cout << lname << endl;

    // 
    //cin.operator>>(fname);
    //cout << fname << endl;

    cout << "operator>>(cin, lname);" << endl;
    operator>>(cin, lname);
    cout << lname << endl;


    



    return 0;
}
