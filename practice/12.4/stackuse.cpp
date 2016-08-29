#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;

    cout << "Enter amount of phone number: ";
    int n;
    cin >> n;

    Stack stack1(n);
    Item temp;
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": ";
        cin >> temp;
        stack1.push(temp);
    }

    cout << "The first stack as following\n";
    cout << stack1;

    Stack stack2(stack1);
    cout << "I get a new stack same as stack1\n";
    cout << stack2;

    stack1.pop(temp);
    cout << temp << " is popped\n";
    Stack stack3;
    stack3 = stack1;
    cout << "Now, I get the third stack\n";
    cout << stack3;

    cout << "Ok, work is done!\n";
    return 0;
}


