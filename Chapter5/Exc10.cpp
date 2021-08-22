//
// Created by Santiago Zamora on 21/08/21.
//

#include "../Headers/std_lib_facilities.h"


double sumOfNs(const std::vector<double>& numbers, int numberOfSum);
void diferenceBetweenNs(std::vector<double> &diffs, const std::vector<double> &numbers, int numbersOfSum);

/*const std::string ex_bad_number_msg = "The number of values to sum must be 1 or greater!";
const std::string ex_bounds_msg = "You asked to sum more elements than those supplied!";
const std::string ex_bad_input_msg = "You entered something that's not an integer!";*/



int main()
{
	try
	{


		int numberOfSum;
		double answer;

		std::vector<double> numbers;
		std::vector<double> differens;

		std::cin >> numberOfSum;

		while(std::cin)
		{

			std::cout << "Enter number of two digits and for stop enter \"|\"" << std::endl;
			std::cin >> answer;

			/*if(!std::cin)
				error("The number of values to sum must be 1 or greater!\n");*/

			if(answer == '|' || answer == EOF)
				break;

			numbers.push_back(answer);
		}


		std::cout << sumOfNs(numbers, numberOfSum) << std::endl;

		diferenceBetweenNs(differens, numbers, numberOfSum);

		for(double value : differens)
			std::cout << value << std::endl;



	} catch(std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}catch(...)
	{
		std::cerr << "Error: Ops Unknow exception" << std::endl;
	}

}


double sumOfNs(const std::vector<double>& numbers, int numberOfSum)
{
	double respuesta = 0;

	if(numberOfSum > numbers.size())
		error("Se ingreso mas numeros que sumar de los que hay en la lista");


	for(int i = numberOfSum - 1; i >= 0; i-- )
	{
		if(numbers[i] > 0 && (respuesta += numbers[i]) < 0 || numbers[i] < 0 && (respuesta += numbers[i]) > 0)
			error("El tamaño de la suma es mas grande que un int");
	}

		return respuesta;
}

void diferenceBetweenNs(std::vector<double> &diffs, const std::vector<double> &numbers, int numbersOfSum)
{
	if((numbersOfSum - 1) < 2 || numbers.size() < 2)
		error("With the values indicated, I can't calculate differences between adjacent values.\n");

	for(int i = 0; i < numbersOfSum - 1; i++)
	{
		diffs.push_back(numbers[i + 1] - numbers[i]);
	}

}
