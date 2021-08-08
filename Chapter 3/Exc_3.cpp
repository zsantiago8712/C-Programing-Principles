#include "../Headers/std_lib_facilities.h"


using namespace std;


int main()
{
    double val1, val2;

    cout << "Enter two integers: ";
    cin >> val1 >> val2;

    if (val2 > val1)
    {
        cout << "The smallest number is: " << val1 << endl;
        cout << "The larger number is: " << val2 << endl;
        
    }    
    else if (val2 < val1)
    {
        cout << "The smallest number is: " << val2 << endl;
        cout << "The larger number is: " << val1 << endl;
    }
    else
    {
        cout << "Theay are equal";
    }
    cout << "The sum is: " << val2 + val1 << endl;
    cout << "The diffrence is: " << (val1 - val2)  << endl;
    cout << "The product is: " << val2 * val1 << endl;
    cout << "The ratio is: " << val1 / val2 << endl;



}