#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    cout << "Type, and I'll converse them (@ to quit):\n";
    char ch;
    cin.get(ch);
    while(ch != '@')
    {
        if(isupper(ch))
            cout << char(tolower(ch));
        else if(islower(ch))
            cout << char(toupper(ch));
        else
            cout << ch;
        cin.get(ch);
    }
    cout << "\nTransformation is done!\n";
    return 0;
}
