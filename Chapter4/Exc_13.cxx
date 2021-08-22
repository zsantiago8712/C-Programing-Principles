#include "../Headers/std_lib_facilities.h"

void fill_vector(vector<int> &numbers);
void eratosthenes(vector<int> &numbers);



int main(void)
{
    int i = 0;
    vector<int>numbers;
    
    fill_vector(numbers);
    eratosthenes(numbers);
    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] != 0)
        {
            cout << numbers[i] << endl;
        }
    }
}


void fill_vector(vector<int> &numbers)
{
    for(int i = 2; i <= 100; i++)
    {
        numbers.push_back(i);
    }
}


void eratosthenes(vector<int> &numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i+1; j < numbers.size(); j++)
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