#include "..\Headers\std_lib_facilities.h"

using namespace std;

#define DOLLAR_TO_YEN 104.91
#define DOLLAR_TO_KRON 8.62
#define DOLLAR_TO_POUND 0.76


int main()
{

char coin;
double dollar = 0;

cout << "Enter th enter the first letter of the coin you want: (y or Y for yen || k or K for Kron || p or P for pound): ";
cin >> coin;

switch (coin)
{
    case('y'):
    case('Y'):
        while( cout << "Enter the amount of Dollars you want to convert in Yens: ", (cin >> dollar) && dollar <= 0)
            cout << "Invalid amount!!" << endl;
        cout << "They are " << dollar * DOLLAR_TO_YEN << " in " << dollar << "dollars" << endl;
        break;
    case('K'):
    case('k'):
        while(cout << "Enter the amount of Dollars you want to convert in Krons: ", (cin >> dollar) && dollar <= 0)
            cout << "Invalid amount!!" << endl;
        cout << "They are " << dollar * DOLLAR_TO_KRON << " in " << dollar << "dollars" << endl;
        break;
    case('P'):
    case('p'):
        while(cout << "Enter the amount of Dollars you want to convert in Pounds: ", (cin >> dollar) && dollar <= 0)
            cout << "Invalid amount!!" << endl;
        cout << "They are " << dollar * DOLLAR_TO_POUND << " in " << dollar << "dollars" << endl;
        break;
    default:
        cout << "Invalid coin: " << coin << endl;
        break;

}


}