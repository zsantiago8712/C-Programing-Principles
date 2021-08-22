#include "../Headers/std_lib_facilities.h"
#include <string.h>

using namespace std;

void findMode(vector<double>numbers);


int main()
{
    double inputUser;
    vector<double>numbers;
    
    while (cout << "Enter a number: " << endl, (cin >> inputUser))
    {
       numbers.push_back(inputUser);
    }     
    
    findMode(numbers);
}


void findMode(vector<double>numbers)
{
    double countMode = 1, numberMode, temp = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            if(numbers[i] == numbers[j])
            {
                countMode ++;
            }
        }

        if(countMode > temp)
        {
            temp = countMode;
            numberMode = numbers[i];
        }
        countMode = 1;
    }

    cout << "\nThe number Mode is " << numberMode << " and repets " << temp << endl;

}