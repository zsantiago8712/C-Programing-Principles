#include "../Headers/std_lib_facilities.h"
#include <string.h>



using namespace std;


int main()
{
    float val1, val2;
    char op_sign;

    cout << "Enter two values and a operation sign like this (5.3 6 - or + or / or *): " << endl;
    cin >> val1 >> val2 >> op_sign;

    if(op_sign == '+')
        cout << "The answer is: " << val1 + val2 << endl;
    else if(op_sign == '-')
       cout << "The answer is: " << val1 - val2 << endl;
    else if(op_sign == '*')
        cout << "The answer is: " << val1 * val2 << endl;
    else if(op_sign == '/')
        cout << "The answer is: " << val1 / val2 << endl;
    else 
        simple_error("Invali operation sign");


}