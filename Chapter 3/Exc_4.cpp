#include "../Headers/std_lib_facilities.h"


using namespace std;


int main()
{
    int val1, val2, val3;
    cout << "Enter three integers: ";
    cin >> val1 >> val2 >> val3;

    if(val1 >= val2 && val2 > val3)
        cout << "\n" << val3 << ", " << val2 << ", " << val1 << endl;
    else if (val1 >= val2 && val2 <= val3)
        cout << "\n" << val2 << ", " << val3 << ", " << val1 << endl;
    else if (val2 >= val1 && val1 >= val3)
        cout << "\n" << val3 << ", " << val1 << ", " << val2 << endl;
    else if (val2 >= val1 && val1 <= val3)
        cout << "\n" << val1 << ", " << val3 << ", " << val2 << endl;
    else if(val3 >= val1 && val1 >= val2)
       cout << "\n" << val2 << ", " << val1 << ", " << val3 << endl;
    else if(val3 >= val2 && val1 <= val2)
        cout << "\n" << val1 << ", " << val2 << ", " << val3 << endl;
    else
        cout << "\n" << val1 << ", " << val2 << ", " << val3 << endl;


}