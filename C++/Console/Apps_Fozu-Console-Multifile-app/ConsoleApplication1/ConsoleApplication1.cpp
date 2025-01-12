#include <iostream>
#include "Data.h"
#include "Balance.h"




int main()
{
    setlocale(LC_ALL, "RU");
    Balance balance; Data userdata;
    userdata.Beforelogin();
    if (userdata.Logged())
    {
        balance.AfterLogin();
    }
    

    return 0;
}