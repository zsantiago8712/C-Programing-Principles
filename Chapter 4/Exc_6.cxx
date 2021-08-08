#include "../Headers/std_lib_facilities.h"





int main(void)
{

    vector<string>spelledNumbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    vector<int>numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for(int inputDigit; cin >> inputDigit; NULL)
    // {
    //     if(inputDigit >= 0 || inputDigit <= 10)
    //     {
    //         cout << spelledNumbers[inputDigit] << endl;
    //     }
    // }

    for(string spellNumberInput; cin >> spellNumberInput; NULL)
    {
        if(spellNumberInput.compare("zero") == 0)
        {
            cout << 0 << endl;
        }else if(spellNumberInput.compare("one") == 0)
        {
            cout << 1 << endl;
        }else if(spellNumberInput.compare("two") == 0)
        {
            cout << 2 << endl;
        }else if(spellNumberInput.compare("three") == 0)
        {
            cout << 3 << endl;
        }else if(spellNumberInput.compare("four") == 0)
        {
            cout << 4 << endl;
        }else if(spellNumberInput.compare("five") == 0)
        {
            cout << 5 << endl;
        }else if(spellNumberInput.compare("six") == 0)
        {
            cout << 6 << endl;
        }else if(spellNumberInput.compare("seven") == 0)
        {
            cout << 7 << endl;
        }else if(spellNumberInput.compare("eight") == 0)
        {
            cout << 8 << endl;
        }else if(spellNumberInput.compare("nine") == 0)
        {
            cout << 9 << endl;
        }else if(spellNumberInput.compare("ten") == 0)
        {
            cout << 10 << endl;
        }
    }



}