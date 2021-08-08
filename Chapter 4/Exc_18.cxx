#include "../Headers/std_lib_facilities.h"



int main(void)
{
    int a;
    int b;
    int c;
    float process, x1 , x2;

    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;

    cout << "Enter c: " << endl;
    cin >> c; 

    process = pow(b, 2) - (4 * a * c);
    if(process < 0)
    {
        cout << "No se puede resolver" << endl;
        exit(1);
    }
    
    process = (sqrt(process));
    x1 = ((-1 * b) + process) / (2 * a);
    x2 = ((-1 * b) - process) / (2 * a);

    cout << "\nX1 = " << x1 << "\nX2 = " << x2 << endl; 


}