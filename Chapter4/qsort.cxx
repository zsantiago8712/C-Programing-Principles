#include "../Headers/std_lib_facilities.h"



void quicksort(vector<int> &values, int left, int right);
int partition(vector<int> &values, int left, int right);


int main(void)
{
    vector<int> nums;
    srand (time(NULL));
    for(int i = 0; i < 100000000; i++)
    {
        nums.push_back(rand() % 100);
    }

    cout << endl;
    quicksort(nums, 0, nums.size() - 1);

    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++) 
    {
        cout << *it << ", ";
    }
}


void quicksort(vector<int> &values, int left, int right) 
{
    int inicio, fin, pivote = (left + right) / 2;
    int temp;

    if(inicio <= fin)
    {
        while(values[inicio] < values[pivote])
            inicio++;

        while(values[fin] > values[pivote])
            fin--;


        if(inicio <= fin)
        {
            temp = values[inicio];
            values[inicio] = values[fin];
            values[fin] = temp;

            inicio++;
            fin--;
        }
        
    }

    if(left < fin)
        quicksort(values, left, fin);

    if(fin < right)
        quicksort(values, inicio, right);
}
    
