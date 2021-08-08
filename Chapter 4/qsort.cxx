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


void quicksort(vector<int> &values, int left, int right) {
    if(left < right) {
        int pivotIndex = partition(values, left, right);
        quicksort(values, left, pivotIndex - 1);
        quicksort(values, pivotIndex, right);
    }
}


int partition(vector<int> &values, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    int pivotValue = values[pivotIndex];
    int i = left, j = right;
    int temp;
    while(i <= j) {
        while(values[i] < pivotValue) {
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}