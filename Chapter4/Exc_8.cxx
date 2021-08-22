#include "../Headers/std_lib_facilities.h"



int main(void)
{
    
    long long rices = 1;
    int find = 0;
    for(int squares = 1; squares <= 64; squares++)
    {
        rices *= 2;
        if(rices >= 1000 && find == 0)
        {
            cout << "se necesitaron " << squares  << " cuadrados para obtener " << rices << " de granos de arroz"<<endl;
            find++;
        }else if(rices  >= 1000000000 && find == 1)
        {
            cout << "se necesitaron " << squares  << " cuadrado para obtener " << rices << " de granos de arroz"<<endl;
            find++;
        }
    }

}