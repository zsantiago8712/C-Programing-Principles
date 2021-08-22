#include "../Headers/std_lib_facilities.h"


int main(void)
{
    int tries = 7;
    int max = 100;
    int min = 0;
    int guess = (max - min)  / 2;
    char answer;

    cout << "Enter m for more and l for less" << endl;

    while(tries != 0)
    {
        cout << "Your number more or lees than " << guess << endl;
        cin >> answer;
        if(answer == 'm' || answer == 'M')
        {
            min = guess;
            guess += (max - min) / 2;
            tries--;

        }else if(answer == 'l' || answer == 'l')
        {
            max = guess;
            guess -= (max - min) / 2;
            tries--;
        }

    }

    cout << "Your numbers is " << guess << " ?" << endl;

}