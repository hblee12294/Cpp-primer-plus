#include <iostream>
#include "account.h"

int main()
{
    using std::cout;

    Account jack("Jack Lee", "JL123456", 1000);
    jack.show();

    jack.deposit(2000);
    jack.show();

    jack.withdraw(10000);
    jack.show();

    jack.withdraw(346);
    jack.show();

    jack.deposit(-1230);
    jack.show();

    return 0;
}
