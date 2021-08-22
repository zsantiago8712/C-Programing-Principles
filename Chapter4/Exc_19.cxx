#include "../Headers/std_lib_facilities.h"

int cheackName(vector<string>namesList, string name);

int main(void)
{
    int score;
    string name;
    vector<string>namesList;
    vector<int>scores;

    while (cout << "Enter a name and the score" << endl, cin >> name >> score, name.compare("Nombre") != 0)
    {
        if(cheackName(namesList, name) == 0)
        {
            namesList.push_back(name);
            scores.push_back(score);
        }else
        {
            cout << "ERROR: This name " << name << "entered twice" << endl;
        }
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