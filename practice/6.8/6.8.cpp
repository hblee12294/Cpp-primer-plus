#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 50;

int main()
{
    using namespace std;
    char filename[SIZE];

    ifstream inFile;
    cout << "Enter the name of target file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count = 0;
    inFile >> ch;
    while(inFile.good())
    {
        ++count;
        inFile >> ch;
    }

    if(inFile.eof())
        cout << "End of file reached.\n";
    else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason\n";

    cout << "There are total " << count << " characters in the file.\n";

    inFile.close();
    return 0;
}
