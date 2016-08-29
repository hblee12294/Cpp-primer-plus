#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char*argv[])
{
    using namespace std;
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    char ch;
    while (cin.get(ch))
        fout << ch;

    return 0;
}
