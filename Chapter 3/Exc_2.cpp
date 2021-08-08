#include "../Headers/std_lib_facilities.h"


using namespace std;


int main()
{
    float user_miles;
    cout << "Enter the amount of miles you want to convert in Kilometers\n" << "miles: " << endl;
    cin >> user_miles;

    cout << "In " << user_miles << " miles are " << user_miles * 1.609 << "Km" << endl;
}