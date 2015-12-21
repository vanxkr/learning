#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string s1 = "1234567890";
    string s2 = "0123456789";

    // char[]
    cout << s1.data() << endl;
    cout << s1.c_str() << endl;
    
    // copy
    char *s = new char[100];
    cout << s1.copy(s, 5, 0) << endl;
    cout << s << endl;
    cout << endl;
    
    // length size ...
    cout << s1.capacity() << endl;
    cout << s1.max_size() << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;
    cout << s1.empty() << endl;
    cout << endl;
    
    // resize
    string s3 = "abcd";
    cout << s3 << endl;
    s3.resize(10, '#');
    cout << s3 << endl;
    cout << endl;

    // append
    s3.append(s);
    cout << s3 << endl;
    s3.append(10, '*');
    cout << s3 << endl;
    cout << endl;

    // compare
    cout << (s1 == s2) << endl;
    cout << (s1 > s2) << endl;
    cout << (s1 < s2) << endl;
    cout << s1.compare(s2) << endl;
    cout << s1.compare(0, 3, s2) << endl;
    cout << s1.compare(0, 3, s2, 1, 4) << endl;
    cout << endl;

    // substr
    cout << s1.substr(0, 8) << endl;

    // swap
    s1.swap(s2);
    cout << s1 << endl << s2 << endl;
    cout << endl;

    // find
    char *s4 = "789";
    cout << s2.find('8', 0) << endl;
    cout << s1.find(s4, 0) << endl;
    cout << s1.find(s4, 0, 2) << endl;
    string s5 = "234";
    cout << s1.find(s5) << endl;
    cout << endl;

    // rfind
    cout << s1.rfind('8', 10) << endl;
    cout << s1.rfind(s4, 10) << endl;
    cout << s1.rfind(s4, 10, 2) << endl;
    cout << s2.rfind(s5, 10) << endl;
    cout << endl;

    // find_first_of
    // same with find
    
    // find_last_of
    cout << s1.find_last_of(s4) << endl;

    // replace
    cout << s1 << endl;
    cout << s1.replace(1, 2, s4) << endl;
    cout << s1.replace(1, 2, s4, 1) << endl;
    cout << s1.replace(4, 5, 10, '#') << endl;
    cout << endl;

    // insert
    cout << s1.insert(5, s1) << endl;

    // erase
    cout << s1.erase(5, 10) << endl;
    cout << endl;

    // iterator
    string::iterator it;
    for (it = s1.begin(); it != s1.end();) {
        cout << *it++;
    } cout << endl;

    // sstream
    string input("hello,this is a test");
    istringstream is(input);
    string ss1, ss2, ss3, ss4;
    is >> ss1 >> ss2 >> ss3 >> ss4;
    ostringstream os;
    os << ss1 << " " << ss2 << " " << ss3 << " " << ss4;
    cout << os.str() << endl;



    return 0;
}
