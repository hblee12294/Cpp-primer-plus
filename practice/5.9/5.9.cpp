#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word \"done\"):\n";

    string word;
    int count = 0;
    cin >> word;
    while(word != "done")
    {
        ++count;
        cin >> word;
    }

    cout << "You enter a total of " << count << " words.\n";
    return 0;
}

