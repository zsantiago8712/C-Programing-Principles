#include "../Headers/std_lib_facilities.h"

int suma(int x, int y);

int main(void)
{
    cout << suma(1, -1) << endl;   
}

int suma(int x, int y)
{
    if(x <= 0 || y <= 0)
    {
        error(" non positive argument in area()\n");
    }

    return x + y;

}