#include "..\Headers\std_lib_facilities.h"

using namespace std;


int main()
{
    char c;
    for(int letter = 65; letter < 123; letter++)
    {
        if(letter < 91 || letter > 96)
        {
            c = letter;
            cout << c << " " << letter << endl;
        }

    }
}