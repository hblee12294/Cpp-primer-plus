#include <iostream>
#include <string>

void strcount(const std::string str);

int main()
{
    using namespace std;
    string input;
    int count = 0;

    cout << "Enter a line:\n";
    getline(cin, input);
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }

    cout << "Bye.\n";
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    for(int i = 0; str[i]; ++i)
        ++count;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters\n";
}
