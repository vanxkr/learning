#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template <typename T>
T add(const T &a, const T &b) {
    return a + b;
}

template <>
const char *add(const char *const s1, const char *const s2) {
    char *temp = new char[strlen(strlen(s1) + strlen(s2) + 2)];
    strcpy(temp, s1);
    strcat(temp, s2);
    return temp;
}

template <typename T, int NUM>
T func(T a) {
    return a * NUM;
}

int main()
{
    cout << "1 + 2 = " << add(1, 2) << endl; // int
    cout << "1.1 + 2.2 = " << add(1.1, 2.2) << endl; // double
    string s1 = "hello,";
    string s2 = "world!";
    cout << "hello, + world! = " << add(s1, s2) << endl;

    char *s3 = "yes?";
    char *s4 = "yes";
    cout << "yes? + yes = " << add(s3, s4) << endl;
    
    cout << func<int, 4>(3) << endl;

    return 0;
}
