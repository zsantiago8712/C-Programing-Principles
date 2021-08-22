#include "../Headers/std_lib_facilities.h"


void findMaxMin(vector<string>&listStrings);
void findMode(vector<string>&listStrings);



int main(void)
{
    string word;
    vector<string>listStrings;
    while(cout << "Enter a word, to exit the loop enter exit: ", (cin >> word))
    {
        if(word.compare("exit") == 0)
        {
            break;
        }
        listStrings.push_back(word);
    }

    findMaxMin(listStrings);
    cout << "\n\nThe largest string entered is: " << listStrings[listStrings.size() - 1] << endl;
    cout << "The smallest string entered is: " << listStrings[0] << endl;
    findMode(listStrings);



}

void findMaxMin(vector<string>&listStrings)
{
    string tempSort, tempMode;
    int countmode = 1;

    for(int i = 0; i < listStrings.size(); i++)
    {
        for(int j = i + 1; j < listStrings.size(); j++)
        {
            if(listStrings[i].length() > listStrings[j].length())
            {
                tempSort = listStrings[i];
                listStrings[i] = listStrings[j];
                listStrings[j] = tempSort;
            }
        }
    }

}

void findMode(vector<string>&listStrings)
{
    double countMode = 1, temp = 0;
    string stringMode;
    for(int i = 0; i < listStrings.size(); i++)
    {
        for(int j = i + 1; j < listStrings.size(); j++)
        {
            if(listStrings[i].compare(listStrings[j]) == 0)
            {
                countMode ++;
            }
        }

        if(countMode > temp)
        {
            temp = countMode;
            stringMode = listStrings[i];
        }
        countMode = 1;
    }

    cout << "The string MODE is " << stringMode << " and repets " << temp << endl;
}