#include "../Headers/std_lib_facilities.h"




using namespace std;

int main()
{
   
    vector<string> disliked = {"Brocoli"};
    vector<string> words_list;

    for(string words; cin >> words; NULL)
    {
        words_list.push_back(words);    //Control + D ends the loop
    }
    system("cls");
    for(int i = 0; i < disliked.size(); i++)
    {
        for(int j = 0; j < words_list.size(); j++)
        {
            if(disliked[i].compare(words_list[j]) == 0)
            { //compare two words if they are the same will return 0 otherwise return 1
                cout << "BLEEP" << endl;
            }
            else
            {
                cout << words_list[j] << endl;
            }    
        }
    }
    
}
