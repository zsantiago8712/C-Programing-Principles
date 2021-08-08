#include "../Headers/std_lib_facilities.h"

//The number is to big for

int main(void)
{
    unsigned long long raices = 1;

    for(int squares = 1; squares <= 63; squares++)
    {   
        raices *= 2;
        cout << squares << ".- "<< raices << endl;
    }

    cout << "The total of racies is " << raices << endl;
}