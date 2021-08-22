//
// Created by Santiago Zamora on 21/08/21.
//

#include "../Headers/std_lib_facilities.h"

void fibonacciSeries(int firstNumber, int secondNumber, int *numberOfValues);
int main()
{
	try
	{


		int numberOfValues;


		std::cout << "1 ";
		fibonacciSeries(1, 1, &numberOfValues);
		std::cout << "\n The largest Fibonacci number that fits in an int is: " << numberOfValues << std::endl;

	}catch(std::exception &error)
	{
		std::cerr << "ERROR: " << error.what() << std::endl;
	}catch(...)
	{
		std::cout << "ERROR: Unknown exception" << std::endl;
	}


}

void fibonacciSeries(int firstNumber, int secondNumber, int *numberOfValues)
{
	if(secondNumber > 0)
	{
		*numberOfValues = secondNumber;
		std::cout << secondNumber << " ";
		fibonacciSeries(secondNumber, firstNumber + secondNumber, numberOfValues);

	}

}