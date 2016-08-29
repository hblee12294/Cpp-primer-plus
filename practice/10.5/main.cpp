#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    Stack stock;
    char ch;
    customer temp;

    cout << "Please enter A to add a customer, \n"
         << "D to delete a customer, Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n') continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a': cout << "Enter the customer's name: ";
                      cin.getline(temp.fullname, 35);
                      cout << "Enter the payment of the customer: ";
                      cin >> temp.payment;
                      cin.get();
                      if (stock.isfull())
                        cout << "stack is already full!\n";
                      else
                        stock.push(temp);
                      break;
            case 'D':
            case 'd': if (stock.isemptty())
                        cout << "stack is already empty!\n";
                      else
                      {
                          stock.pop(temp);
                          cout << temp.fullname << "has been popped out.\n";
                          stock.showstock();
                      }
        }

        cout << "\nPlease enter A to add a customer, \n"
             << "D to delete a customer, Q to quit\n";
    }

    cout << "Bye!\n";
    return 0;
}
