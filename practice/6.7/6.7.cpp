#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    int vow = 0;
    int con = 0;
    int other = 0;

    cout << "Enter words (q to quit):\n";
    char word[20];
    cin >> word;
    while(strcmp(word, "q"))
    {
        if(isalpha(word[0]))
        {
            if(tolower(word[0]) == 'a' || tolower(word[0]) == 'e' || tolower(word[0]) == 'i' || tolower(word[0]) == 'o' || tolower(word[0]) == 'u')
                ++vow;
            else
                ++con;
        }
        else ++other;

        cin >> word;
    }

    cout << vow << " words beginning with vowels\n";
    cout << con << " words beginning with consonants\n";
    cout << other << " others\n";

    return 0;
}
