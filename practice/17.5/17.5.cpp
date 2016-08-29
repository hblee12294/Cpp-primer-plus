#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iterator>
#include <algorithm>

void show(const std::string &s) { std::cout << s << std::endl; }

int main()
{
    using namespace std;

    string mat = "mat.dat";
    string pat = "pat.dat";

    //create mat.dat and pat.dat
    ofstream fout(mat, ios::out | ios::binary);
    cout << "---mat.dat---\n" << "Enter guest name (blank line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
        fout << name << endl;
    fout.close();

    fout.open(pat);
    cout << "---gat.dat---\n" << "Enter guest name (blank line to quit):\n";
    while (getline(cin, name) && name.size() > 0)
        fout << name << endl;
    fout.close();

    //the real practice part
    ifstream fin_mat(mat);
    if (!fin_mat)
    {
        cerr << "Can not open" << mat << " file\n";
        exit(EXIT_FAILURE);
    }
    list<string> mat_guest;
    string temp;
    while (getline(fin_mat, temp))
        mat_guest.push_back(temp);
    mat_guest.sort();
    cout << "Here are guests of Mat:\n";
    for_each(mat_guest.begin(), mat_guest.end(), show);


    ifstream fin_pat(pat);
    if (!fin_pat)
    {
        cerr << "Can not open" << mat << " file\n";
        exit(EXIT_FAILURE);
    }
    list<string> pat_guest;
    while (getline(fin_pat, temp))
        pat_guest.push_back(temp);
    pat_guest.sort();
    cout << "Here are guests of Pat:\n";
    for_each(pat_guest.begin(), pat_guest.end(), show);

    //merge guest list
    string matnpat = "matnpat.txt";
    fout.open(matnpat);
    if (!fout.is_open())
    {
        cerr << "Can not open " << matnpat << " file\n";
        exit(EXIT_FAILURE);
    }
    mat_guest.merge(pat_guest);
    mat_guest.unique();
    list<string>::iterator ct;
    for (ct= mat_guest.begin(); ct != mat_guest.end(); ++ct)
        fout << *ct << endl;

    cout << "Done.\n";
    fout.close();
    fin_mat.close();
    fin_pat.close();

    return 0;
}
