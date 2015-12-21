#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("tobuy.txt");
    if (fin.is_open() == false) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done!" << endl;
    fin.close();
    return 0;
}
