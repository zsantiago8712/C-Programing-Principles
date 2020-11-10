#include "..\Headers\std_lib_facilities.h"
#include <math.h>
using namespace std;


void print_square(int number);

int main()
{
    for(int i = 0; i < 100; i++)
        print_square(i);
}


void print_square(int number)
{
    cout << number << "\t" << pow(number, 2) << endl;
}