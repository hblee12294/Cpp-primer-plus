#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

struct donor
{
    string name;
    double amount;
};

int main()
{

    cout << "Input process begin!\n";

    ifstream inFile;
    inFile.open("info.txt");

    if(!inFile.is_open())
    {
        cout << "Could not open the file.\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int N;
    inFile >> N;
    donor *p = new donor[N];
    for(int i = 0; i < N && inFile.good(); ++i)
    {
        inFile.get();
        getline(inFile, p[i].name);
        inFile >> p[i].amount;
    }

    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    cout << "\nGrand Patrons:\n";
    int flag = 0;
    for(int j = 0; j < N; ++j)
    {
        if(p[j].amount > 10000)
        {
            cout << p[j].name << endl;
            flag = 1;
        }
    }
    if(flag == 0) cout << "none\n";

    cout << "\nPatrons:\n";
    flag = 0;
    for(int j = 0; j < N; ++j)
    {
        if(p[j].amount <= 10000)
        {
            cout << p[j].name << endl;
            flag = 1;
        }
    }
    if(flag == 0) cout << "none\n";

    inFile.close();
    return 0;
}
