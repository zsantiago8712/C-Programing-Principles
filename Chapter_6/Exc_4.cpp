//
// Created by Santiago Zamora on 07/08/21.
//

#include "../Headers/std_lib_facilities.h"


class Name_value{

	public:
		int value;
		string name;

		Name_value(string nameInput, int valueInput)
				: name(nameInput), value(valueInput){}
		
		Name_value(string nameInput)
				: name(nameInput), value(0) {}
		
		Name_value(int valueInput)
				: name("Not define!!"), value(valueInput) {}

		Name_value()
				:name(""), value(0) {}
};


bool checkNameRepetition(string name, vector<Name_value>usersScores);



int main(void)
{
	try
	{

		vector<Name_value> usersScores;
		Name_value user;
		int value;
		string name;
		while (cout << "Enter a name and the score, To stop enter Quit as name" << endl, cin >> name >> value, name.compare("Quit") != 0)
		{
			if(checkNameRepetition(name, usersScores))
			{
				user.name = name;
				user.value = value;
				usersScores.push_back(user);
			}
			else
				cout << "ERROR: This name " << name << " entered twice" << endl;
		}
		
		for(int i = 0; i < usersScores.size(); i++)
			cout << "User: " << usersScores[i].name << " Score: " << usersScores[i].value << endl;


	}catch(exception &error)
	{
		cout << "Error: " <<  error.what() << endl;
	}catch(...)
	{
		cout << "Error: Unknow exception" << endl;
	}

}

bool checkNameRepetition(string name, vector<Name_value>usersScores)
{

	for(int i = 0; i < usersScores.size(); i++)
	{
		if(usersScores[i].name.compare(name) == 0)
			return false;
	}
	return true;
}