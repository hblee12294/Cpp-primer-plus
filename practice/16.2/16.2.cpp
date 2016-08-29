#include <iostream>
#include <string>
#include <iterator>
#include <cctype>

using std::string;
using std::cout;
using std::cin;

bool palindrome(const string &s);

int main()
{
    string temp;

    cout << "Enter test palindrome <quit to quit>: ";
    getline(cin, temp);
    while (cin && temp != "quit")
    {
        if (temp == "\0")
        {
            cout << "Oops, you didn't enter any words, enter again: ";
            getline(cin,temp);
            continue;
        }

        if (palindrome(temp))
            cout << "Bingo! " << temp << " is a palindrome.\n";
        else
            cout << "Sorry, " << temp << " is not a palindrome.\n";

        cout << "Enter next test palindrome <quit to quit>: ";
        getline(cin, temp);
    }

    cout << "Bye~\n";
    return 0;
}

bool palindrome(const string &s)
{
    string word;
    int i = 0;
    int j = s.size();

    for (; i < j; ++i)
        if (isalpha(s[i])) word.push_back(tolower(s[i]));

    i = 0;
    j = word.size() - 1;
    for (; i <= j; ++i, --j)
        if (word[i] != word[j]) return false;
    return true;
}
