#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack stack1;
    char ch;
    Item temp;
    cout << "Please enter A to add a phone number,\n"
         << "P to process a number, or Q to quit.\n";
         while (cin >> ch && toupper(ch) != 'Q')
         {
             while (cin.get() != '\n')
                continue;
             if (isalpha(ch))
             {
                 cout << '\a';
                 continue;
             }
             switch(ch)
             {
                 case 'A':
                 case 'a': cout << "Enter a phone number to add: ";
                           cin >> temp;
                           if (stack1.isfull())
                               cout << "stack is full\n";
                           else
                               stack1.push(temp);
                           break;
                 case 'P':
                 case 'p': if (stack1.isempty())
                               cout << "stack is empty\n";
                           else
                           {
                               stack1.pop(temp);
                               cout << temp << " popped\n";
                           }
                           break;

             }
             cout << "Please enter A to add a phone number,\n"
                  << "P to process a number, or Q to quit.\n";
         }

         cout << "The first stack as following\n";
         cout << stack1;

         Stack stack2(stack1);
         cout << "There's a new number list copy from the first one\n";
         cout << stack2;

         Stack stack3;
         stack3 = stack1;
         cout << "Wow, copy again\n";
         cout << stack3;

        cout << "Bye\n";
        return 0;
}
