//
// Created by Santiago Zamora on 20/08/21.
//

#include "../Headers/std_lib_facilities.h"

double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);

int main()
{

	try
	{
		double numberInput = 0, answerKelvin, answerCelsius;
		std::cin >> numberInput;

		answerKelvin = celsiusToKelvin(numberInput);
		answerCelsius = kelvinToCelsius(numberInput);

		std::cout << answerKelvin << std::endl;
		std::cout << answerCelsius << std::endl;

	}catch(std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}catch(...)
	{
		std::cerr << "Error: Ops Unknow exception" << std::endl;
	}
}

double celsiusToKelvin(double celsius)
{
	if(celsius < -273.15)
		error("Error cant be below of -273.15");
	return celsius + 273.15;
}

double kelvinToCelsius(double kelvin)
{
	if(kelvin < -273.15)
		error("Error cant be below of -273.15");
	return kelvin - 273.15;
}

