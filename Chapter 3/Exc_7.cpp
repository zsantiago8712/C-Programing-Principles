#include "../Headers/std_lib_facilities.h"
#include <string.h>



using namespace std;

int main()
{
    char number[100];

    cout << "Spell-out a number: ";
    cin >> number;
    
    if(number[0] > 96)
        number[0] -= 32;

    if(strcmp(number, "One") == 0)
        cout << 1 <<endl;
    else if(strcmp(number, "Two") == 0)
        cout << 2 << endl;
    else if(strcmp(number, "Three") == 0)
        cout << 3 << endl;
    else if(strcmp(number, "Four") == 0)
        cout << 4 << endl;
    else 
        cout << "Stupid computer" << endl;
}