#include "../Headers/std_lib_facilities.h"


int isPrime(int num);


int main(void)
{
    int primesNumbers = 0;
    cout << "How many primes numbers do you want to find?: ";
    cin >> primesNumbers;

    for(int i = 2; primesNumbers > 0; primesNumbers--, i++)
    {
        if(isPrime(i))
        {
            cout << i << endl;
        }
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