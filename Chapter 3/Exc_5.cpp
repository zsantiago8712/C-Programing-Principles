#include "../Headers/std_lib_facilities.h"


using namespace std;


int main()
{
    int val1, val2, val3;
    string valStr1, valStr2, valStr3;
    cout << "Enter three integers: ";
    cin >> valStr1 >> valStr2 >> valStr3;
    val1 = valStr1[0]; 
    val2 = valStr2[0];
    val3 = valStr3[0];

    if (val1 < 97 && val1 > 64)
        val1 += 32;
    else if (val2 < 97 && val2 > 64)
        val2 += 32;
    else if (val3 < 97 && val3 > 64)
        val3 += 32;

    

    if(val1 >= val2 && val2 >= val3)
        cout << "\n" << valStr3 << ", " << valStr2 << ", " << valStr1 << endl;
    else if (val1 >= val2 && val2 <= val3)
        cout << "\n" << valStr2 << ", " << valStr3 << ", " << valStr1 << endl;
    else if (val2 >= val1 && val1 >= val3)
        cout << "\n" << valStr3 << ", " << valStr1 << ", " << valStr2 << endl;
    else if (val2 >= val1 && val1 <= val3)
        cout << "\n" << valStr1 << ", " << valStr3 << ", " << valStr2 << endl;
    else if(val3 >= val1 && val1 >= val2)
       cout << "\n" << valStr2 << ", " << valStr1 << ", " << valStr3 << endl;
    else if(val3 >= val2 && val1 <= val2)
        cout << "\n" << valStr1 << ", " << valStr2 << ", " << valStr3 << endl;
    else
        cout << "\n" << valStr1 << ", " << valStr2 << ", " << valStr3 << endl;


}