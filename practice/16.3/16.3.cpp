#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using std::string;
using std::vector;

void get_wordlist(vector<string> &wl);

int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    std::srand(std::time(0));
    char play;
    vector<string> wordlist;
    get_wordlist(wordlist);

    cout << "Will you play a word game <y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y')
    {
        string target = wordlist[std::rand() % wordlist.size()];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
             << " letters, and you guess "
             << "one letter at a time.\nYou get " << guesses << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guess that, try again.\n";
                continue;
            }

            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guess left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right.\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another> <y/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye.\n";
    return 0;
}

void get_wordlist(vector<string> &wl)
{
    std::ifstream fin;
    fin.open("word_dict.txt");
    if (fin.is_open() == false)
    {
        std::cout << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }

    std::string item;
    while (fin >> item)
        wl.push_back(item);
}
