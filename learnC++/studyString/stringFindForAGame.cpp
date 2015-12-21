#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
using std::string;
const int NUM = 26;
const string wordList[NUM] = {
    "apiary", "beetle", "cereal", "danger", "ensign", 
    "florid", "garage", "health", "insult", "jackal",
    "keeper", "loaner", "manage", "nonce" , "onset" ,
    "plaid", "quite", "remote", "stolid", "train", 
    "useful", "vaild", "whence", "xenon", "zippy",
    "okokok"
};
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while ('y' == play) {
        string target = wordList[rand() % NUM];
        int length = target.length();
        string attemp(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
            << " letters, and you guess\n"
            << "one letter at a time. You get " << guesses
            << " wrong guess" << endl;
        cout << "Your word: " << attemp << endl;
        while (guesses > 0 && attemp != target) {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos 
                    || attemp.find(letter) != string::npos) {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos) {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            } else {
                cout << "Good guess!\n";
                attemp[loc] = letter;
                loc = target.find(letter, loc+1);
                while (loc != string::npos) {
                    attemp[loc] = letter;
                    loc = target.find(letter, loc+1);
                }
            }
            cout << "Your word: " << attemp << endl;
            if (attemp != target) {
                if (badchars.length() > 0) {
                    cout << "Bad choice: " << badchars << endl;
                }
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0) {
            cout << "That's right!" << endl;
        } else {
            cout << "Sorry, the word is: " << target << endl;
        }
        cout << "Will you play anthor? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    cout << "Bye!" << endl;
    return 0;
}
