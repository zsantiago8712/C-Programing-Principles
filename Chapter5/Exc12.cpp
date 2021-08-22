//
// Created by Santiago Zamora on 21/08/21.
//

#include "../Headers/std_lib_facilities.h"
#include <random>

void fillVector(std::vector<int>& numbersToGuess);
int bullCow(const std::vector<int>& numbersToGuess, const std::vector<int>& userNumbers);
void UserFillVector(std::vector<int>& userNumbers);


int main()
{
	std::vector<int> numberToGuess;
	std::vector<int> userNumbers;
	int correctGuesses = 0;

	fillVector(numberToGuess);

	while (correctGuesses < 4)
	{
		UserFillVector(userNumbers);
		correctGuesses = bullCow(numberToGuess, userNumbers);
		userNumbers.clear();
	}

	std::cout << "You win!!" << std::endl;


}

void fillVector(std::vector<int>& numbersToGuess)
{
	int randomNumber;
	std::random_device randomDevice; // --> Inicia el random engine
	std::mt19937 randomEngine(randomDevice()); // random engine
	std::uniform_int_distribution<int> distribution(0, 9); // distribuidor

	numbersToGuess.push_back(distribution(randomEngine));
	for(int i = 0; i < 3; i++)
	{
		do
		{
			randomNumber = distribution(randomEngine); // da el número random
		} while (std::find(numbersToGuess.begin(), numbersToGuess.end(), randomNumber) != numbersToGuess.end());
		numbersToGuess.push_back(randomNumber);
	}



}


int bullCow(const std::vector<int>& numbersToGuess, const std::vector<int>& userNumbers)
{
	int index, correctGuess = 0;
	for(int i = 0; i < 4; i++)
	{
		auto numbersToGuessIndex = std::find(numbersToGuess.begin(), numbersToGuess.end(), userNumbers[i]);

		if(numbersToGuessIndex != numbersToGuess.end())
		{
			index = numbersToGuessIndex - numbersToGuess.begin();
			if(index == i)
			{
				std::cout << "BULL!" << std::endl;
				correctGuess++;
			}
			else
				std::cout << "COW!" << std::endl;
		}

	}
	return correctGuess;
}

void UserFillVector(std::vector<int>& userNumbers)
{
	int numbers;
	std::cout << "Mete 4 numeros del 0 al 9" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		std::cin >> numbers;
		userNumbers.push_back(numbers);
	}
}
