//
// Created by Santiago Zamora on 21/08/21.
//

#include "../Headers/std_lib_facilities.h"


int sumOfNs(std::vector<int>numbers, int numberOfSum);


int main()
{
	try
	{


		int numberOfSum, answer;

		std::vector<int> numbers;

		std::cin >> numberOfSum;

		while(std::cin)
		{
			std::cout << "Enter number of two digits and for stop enter \"|\"" << std::endl;
			std::cin >> answer;

			if(answer == '|')
				break;

			numbers.push_back(answer);
		}



		std::cout << sumOfNs(numbers, numberOfSum) << std::endl;


	} catch(std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
	}catch(...)
	{
		std::cerr << "Error: Ops Unknow exception" << std::endl;
	}

}


int sumOfNs(std::vector<int>numbers, int numberOfSum)
{
	int respuesta = 0;


	if(numberOfSum > numbers.size())
		error("Se ingreso mas numeros que sumar de los que hay en la lista");


	for(int i = numberOfSum - 1; i >= 0; i-- )
		respuesta += numbers[i];

	return respuesta;
}