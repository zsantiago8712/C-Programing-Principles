#include "../Headers/std_lib_facilities.h"
#include <string.h>

using namespace std;



int main()
{
    double val1, val2 = 0;
    string unit = "";
    vector<double> valores;
    
    while (cout << "Enter a number: " << endl, (cin >> val1) && val1 != 125)
    {
       

        cout << " Enter the unit you want your number be (cm, m, in , ft)" << endl;
        cin >> unit;


        if(unit.compare("cm") == 0)
            valores.push_back(val1 /100);
        else if(unit.compare("m") == 0)
            valores.push_back(val1);
        else if(unit.compare("in") == 0)
            valores.push_back(val1 /39.37);
        else if(unit.compare("ft") == 0)
            valores.push_back(val1 / 3.281);
        else 
            break;
       


            if (val1 < val2 && val2 != 0)
            {
                cout << "The smaller number is: " << val1 << unit << endl;
                cout << "The largest number is: " << val2 << unit << endl;
                if((val2 - val1) < 1)
                    cout << "The numbers are almost equal by: " << val2 - val1 << unit << endl;
                

            }else if(val1 > val2 && val2 != 0)
            {
                cout << "The smaller number is: " << val2 << unit << endl;
                cout << "The largest number is: " << val1 << unit << endl;
                if((val1 - val2) < 1)
                     cout << "The numbers are almost equal by: " << val1 - val2 << unit << endl;

            }else if(val1 == val2 && val2 != 0)
            {
                cout << "They are the same number" << endl;
            }else if(val2 == 0 && val1 != 0)
            {
                cout << "The largest so far is: " << val1 << unit << endl;
                cout << "The smallest so far is: " << val1 << unit << endl;
            }
            val2 = val1;
            
            
    }

    int temporal_int;
    for(int i = 0; i < valores.size(); i++)
    {
        for(int j = 1; j <valores.size(); j++)
        {
            if(valores[i] > valores[j])
            {
                temporal_int = valores[i];
                valores[j - 1] = valores[j];
                valores[j] = valores[i];
            }
        }
    }

    for(int i = 0; i < valores.size(); i++)
    {
        cout << valores[i] << endl;
    }
    
}