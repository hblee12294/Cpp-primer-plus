//存在内存泄漏，不知道怎么解决

#include <iostream>
#include <string>

void trans(std::string &sss);

int main()
{
    using namespace std;

    string str = "null";
    cout << "Enter a string (q to quit): ";
    while(getline(cin, str) && str != "q")
    {
        trans(str);
        cout << str << endl;

        cout << "Next string (q to quit): ";
    }

    cout << "Bye.\n";
    return 0;
}

void trans(std::string &sss)
{
    for(int i = 0; sss[i] != '\0'; ++i)
        sss[i] = toupper(sss[i]);
}
