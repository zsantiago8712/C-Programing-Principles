#include "../Headers/std_lib_facilities.h"

void fill_vector(vector<int> &numbers, int max);
void eratosthenes(vector<int> &numbers);



int main(void)
{
    int max = 0;
    vector<int>numbers;
    cout << "enter the limit to find all th eprimes number" << endl;
    cin >> max;
    fill_vector(numbers, max);
    eratosthenes(numbers);

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] != 0)
        {
            cout << numbers[i] << endl;
        }
    }
}


void fill_vector(vector<int> &numbers, int max)
{
    for(int i = 2; i <= max; i++)
    {
        numbers.push_back(i);
    }
}


void eratosthenes(vector<int> &numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            if(numbers[j] != 0)
            {
                if(numbers[j] % numbers[i] == 0)
                {
                    numbers[j] = 0;
                }
            }
        }
    }
}