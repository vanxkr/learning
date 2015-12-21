// 学习string的构造函数
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char s[] = "12345678";
    cout << "s = \"12345678\":\n" << s << endl << endl;

    string s1(s);
    cout << "s1 = string(s):\n" << s1 << endl << endl;

    string s2(20, '$');
    cout << "s2 = string(20, '$'):\n" << s2 << endl << endl;

    string s3(s2);
    cout << "s3 = string(s2):\n" << s3 << endl << endl;

    string s4;
    cout << "s4.length() = string():\n" << s4.length() << endl << endl;

    string s5(s, 10);
    cout << "s5 = string(s, 10):\n" << s5 << endl << endl;

    string s6(s+2, s+6);
    cout << "s6 = string(s+2, s+6)):\n" << s6 << endl << endl;

    string s7(s1, 0, 5);
    cout << "s7 = string(s1, 0, 5):\n" << s7 << endl << endl;

    return 0;
}
