#include "../Headers/std_lib_facilities.h"
#include <string.h>



using namespace std;


int main()
{
    int pennies, nickels, dimes, quarters, half_dollars, dollars;

    cout << "How many pennies do yo have?: ";
    cin >> pennies;

    cout << "How many nickels do yo have?: ";
    cin >> nickels;

    cout << "How many dimes do yo have?: ";
    cin >> dimes;

    cout << "How many quarters do yo have?: ";
    cin >> quarters;

    cout << "How many half_dollars do yo have?: ";
    cin >> half_dollars;

    cout << "How many dollars do yo have?: ";
    cin >> dollars;

    system("cls");

    cout << "You have " << pennies << " pennies" << endl;
    cout << "You have " << nickels << " nickels" << endl;
    cout << "You have " << dimes << " dimes" << endl;
    cout << "You have " << quarters << " quarters" << endl;
    cout << "You have " << half_dollars << " half_dollars" << endl;
    cout << "The value of all of your coins is " << pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars * 100);


}