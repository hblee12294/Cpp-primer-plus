#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool palindrome(const string &s);

int main()
{
    string temp;

    cout << "Enter test palindrome <quit to quit>: ";
    while (cin >> temp && temp != "quit")
    {
        if (!palindrome(temp))
            cout << "  Sorry, " << temp << " is not a palindrome.\n";
        else
            cout << "  Bingo! " << temp << " is a palindrome.\n";

        cin.get();
        cout << "Next test palindrome <quit to quit>: ";
    }

    cout << "Bye~\n";
    return 0;
}

bool palindrome(const string &s)
{
    int i = 0;
    int j = s.size() - 1;

    for (; i <= j; ++i, --j)
        if (s[i] != s[j]) return false;
    return true;
}
