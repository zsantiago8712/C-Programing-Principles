#include "..\Headers\std_lib_facilities.h"

using namespace std;



int main()
{
    double total, temp, smallest, largest, mean;
    vector<double>distances;

    cout << "To stop the loop enter Ctrl + D" << endl;
    for(double distance; cin >> distance;)
    {
        if(distance <= 0)
            break;
        else
            distances.push_back(distance);
    }


    
    for(int i = 0; i < distances.size(); i++)
    {
        for(int j = i +1; j < distances.size(); i++)
        {
            if(distances[i] > distances[j])
            {
                temp = distances[i];
                distances[j -1] = distances[j];
                distances[j] = distances[i];
            }
        }
    }

    smallest = distances[0];
    largest = distances[-1];
    mean = total / distances.size();

    cout << "The smallest is: " << smallest <<endl;
    cout << "The largest is: " << largest << endl;
    cout << "The mean distance is: " << mean << endl;

    for(int i = 0; i < distances.size(); i++)
        cout << distances[i] << endl;

}