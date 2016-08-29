#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter first source filename: ";
    string src_filename1;
    cin >> src_filename1;
    ifstream fin1(src_filename1);
    if (!fin1)
    {
        cerr << "Can not open " << src_filename1 << " file\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter second source filename: ";
    string src_filename2;
    cin >> src_filename2;
    ifstream fin2(src_filename2);
    if (!fin2)
    {
        cerr << "Can not open " << src_filename2 << " file\n";
    }

    cout << "Enter destination filename: ";
    string des_filename;
    cin >> des_filename;
    ofstream fout(des_filename);
    if (!fout)
    {
        cerr << "Can not open " << des_filename << " file\n";
    }

    string line1, line2;
    while (getline(fin1, line1) && getline(fin2, line2))
    {
        fout << line1 << " " << line2 << endl;
    }
    while (getline(fin1,line1)) fout << line1 << endl;
    while (getline(fin2,line2)) fout << line2 << endl;

    cout << "Done.\n";
    return 0;
}
