//
// Created by Santiago Zamora on 21/08/21.
//

#include "../Headers/std_lib_facilities.h"

bool checkDay(std::string& day);

int main()
{
	std::vector<int> numbers;
	int number, result = 0;
	std::string day;

	while(true)
	{
		std::cin >> day >> number;
		if(day != "|" )
		{
			if(checkDay(day))
				numbers.push_back(number);

		}
		else
			break;
	}

	for(int value : numbers)
			result += value;

	std::cout << "The result of the sum of all days is: " << result << std::endl;
}

bool checkDay(std::string& day)
{
	static const std::vector<std::string> days {"Monday", "Tuesday", "Wendnesday", "Thursday", "Friday", "Sunday", "Saturday", "Mon", "Tues", "Wends", "Thurs", "Fri", "Sat", "Sun"};

	day[0] = toupper(day[0]);
	if(std::find(days.begin(), days.end(), day) !=  days.end())
		return true;

	return false;
}