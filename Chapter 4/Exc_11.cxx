#include "../Headers/std_lib_facilities.h"

int isPrime(int num);

int main(void)
{
    vector<int>primesNumbers;

    for(int i = 2; i <= 100; i++)
    {
        if(isPrime(i))
        {
            primesNumbers.push_back(i);
        }
    }

    for(int i = 0; i < primesNumbers.size(); i++)
    {
        cout << primesNumbers[i] << endl;
    }

}

int isPrime(int num)
{
   for(int i = 2; i <= (num / 2); i++)
   {
       if(num % i == 0)
       {
           return 0;
       }
   }

    return 1;
}