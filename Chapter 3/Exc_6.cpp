#include "../Headers/std_lib_facilities.h"


using namespace std;


int main()
{
    int user_int;

    cout << "Enter a number: ";
    cin >> user_int;

    if((user_int % 2) == 0)
        cout << user_int << " is even number" << endl;
    else
        cout << user_int << " is a odd number" << endl;
}