#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "Enter words (to stop, type the word \"done\"):\n";

    char word[80];
    int count = 0;
    cin >> word;
    while(strcmp(word, "done") != 0)
    {
        ++count;
        cin >> word;
    }

    cout << "You enter a total of " << count << " words.\n";
    return 0;
}
