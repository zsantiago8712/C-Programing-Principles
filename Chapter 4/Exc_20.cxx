#include "../Headers/std_lib_facilities.h"

int cheackName(vector<string>namesList, string name);
int searchName(vector<string>namesList, string name);

int main(void)
{
    int score, index;
    string name;
    vector<string>namesList;
    vector<int>scores;

    while (cout << "Enter a anme and the score" << endl, cin >> name >> score, name.compare("Nomore") != 0)
    {
        if(cheackName(namesList ,name) == 0)
        {
            namesList.push_back(name);
            scores.push_back(score);
        }else
        {
            cout << "ERROR: This name " << name << "entered twice" << endl;
        }
    }


    cout << "\n\nEnter a name to know his score" << endl;
    cin >> name;

    if((index = searchName(namesList, name)) >= 0)
    {
        cout << name << " score: "<< scores[index] << endl;

    }else
    {
        cout << "ERROR: name not found" << endl;
    }
    
}

int cheackName(vector<string>namesList, string name)
{
    for(int i = 0; i < namesList.size(); i++)
    {
        if(namesList[i] == name)
        {
            return 1;
        }
    }
    return 0;
}



int searchName(vector<string>namesList, string name)
{
   for(int i = 0; i < namesList.size(); i++)
    {
        if(namesList[i] == name)
        {
            return i;
        }
    }
    return - 1; 
}