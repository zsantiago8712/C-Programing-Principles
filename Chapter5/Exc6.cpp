//
// Created by Santiago Zamora on 20/08/21.
//

#include "../Headers/std_lib_facilities.h"



int main()
{
	try
	{
		double numberInput = 0, answerFahrenheit, answerCelsius;
		std::cin >> numberInput;

		answerKelvin = celsiusToFahrenheit(numberInput);
		answerCelsius = fahrenheitToCelsius(numberInput);

		std::cout << answerFahrenheit << std::endl;
		std::cout << answerCelsius << std::endl;

	}catch(std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}catch(...)
	{
		std::cerr << "Error: Ops Unknow exception" << std::endl;
	}
}

float celsiusToFahrenheit(float celsius)
{
	if(celsius < -273.15)
		error("Error cant be below of -273.15 celsius");

	return (celsius * 1.8) + 32;
}

float fahrenheitToCelsius(float fahrenheit)
{
	if(fahrenheit < -459.67)
		error("Error cant be below of -459.67 fahrenheit");

	return (fahrenheit - 32) * 0.55;
}

