//
// Created by Santiago Zamora on 20/08/21.
//

#include "../Headers/std_lib_facilities.h"
double ctok(double c);

int main()
{

	try
	{
		double c = 0, k;
		std::cin >> c;
		if(c < -273.15)
			error("Error cant be below of -273.15");

		k = ctok(c);
		std::cout << k << std::endl;
	}catch(std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}catch(...)
	{
		std::cerr << "Error: Ops Unknow exception" << std::endl;
	}
}


double ctok(double c)
{
	return c + 273.15;
}

