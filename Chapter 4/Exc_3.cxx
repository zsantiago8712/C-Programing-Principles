//!Drill Chapter 4
#include <iostream>
#include <vector>

using namespace std;


void buubleSort(vector<double> &distancesBetweenCities);


int main(void)
{
    double mean = 0;
    vector<double>distancesBetweenCities;

    for(double distanceInput; cin >> distanceInput; NULL)
    {
        mean += distanceInput;
        distancesBetweenCities.push_back(distanceInput);
    }

    buubleSort(distancesBetweenCities);

    cout << "The smallest distance is: " << distancesBetweenCities[0] << endl;
    cout << "The largest distance is: " << distancesBetweenCities[-1] << endl;
    cout << "The mean distances is: " << mean / distancesBetweenCities.size() << endl;



}


void buubleSort(vector<double> &distancesBetweenCities)
{
    double temp;

    for(int i = 0; i < distancesBetweenCities.size(); i++)
    {
        for(int j = i + 1; j < distancesBetweenCities.size(); j++)
        {
            if(distancesBetweenCities[i] > distancesBetweenCities[j])
            {
                temp = distancesBetweenCities[i];
                distancesBetweenCities[i] = distancesBetweenCities[j];
                distancesBetweenCities[j] = temp;
            }
        }
    }
}