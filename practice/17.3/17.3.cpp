#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Error! Command line: source_file, destination_file\n";
        exit(EXIT_FAILURE);
    }

    string src_file = argv[1];
    string des_file = argv[2];
    if ( src_file == des_file)
    {
        cerr << "Error! Destination file can not be same with source file.\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin(src_file);
    if (!fin)
    {
        cerr << "Can not open " << src_file << " file.\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(des_file);
    if (!fout)
    {
        cerr << "Can not open " << des_file << " file.\n";
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(fin, line))
        fout << line << endl;

    cout << "Done.\n";
    return 0;
}
