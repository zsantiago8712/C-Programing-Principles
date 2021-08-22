#include "../Headers/std_lib_facilities.h"

int cheackName(vector<string>namesList, string name);
void searchScore(vector<string>nameList, vector<int>scoresList, int score);
int main(void)
{
    int score;
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


    while(cout << "\n\nEnter a score to know every name with that score" << endl,true)
    {
        cin >> score;
        searchScore(namesList, scores, score);
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



void searchScore(vector<string>nameList, vector<int>scoresList, int score)
{
   bool find = false;
   for(int i = 0; i < scoresList.size(); i++)
    {
        if(scoresList[i] == score)
        {
            find = true;
            cout << nameList[i] << endl;
        }
    }
    if(!find)
    {
        cout << "Score not found" << endl;
    } 
}