#include "../Headers/std_lib_facilities.h"

bool checkSentence();
bool isNoun(std::string *inputWord);
bool isVerb(std::string *inputWord);
bool isConjuction(std::string *inputWord);




/*
* Sentence: Noun Verb
* Sentnce Conjuction Sentence -> Noun Verb Conjuction Noun Verb = "Birds fly but fish swim ." 
*
* Conjuction:
*     "and"
*     "or" 
*     "but"
*
* Noun:
*   "birds"
*   "fish"
*   "C++"
*
* Verb:
*   "rules"
*   "fly"
*   "swim"
*
* */


/* Dividir Problema
 * 1) Leer la opcion del usuario
 * 2) Leer la palabra del usuario
 * 3) Checara si es una oracion bien escrita (SI CUMPLE TODOS LOS SUBPROBLEMAS ESTARA BINE ESCRITA)
 *    3.1) Checar que sea un noun
 *    3.2) Cecar que la siguiente palabra sea un verbo
 *    3.3) Checar que la sieguite palabra una Conjuncion on acabe la oracion
 *    3.4) Checar que haya acabdo la opracion correctamente con " ." -> va hacer la unica ves que no ignoraremos los espacios
 * */



int main()
{


    char option;
	try
	{
		do
		{
			std::cin >> option;
			if(option != 'q')
			{
				if(checkSentence())
					std::cout << "OK!" << std::endl;
				else
					std::cout << "NO OK!!" << std::endl;
			}
		}while(option != 'q');

	}catch (std::exception& error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
		return 1;
	}
	catch(...)
	{
		std::cerr << "ERROR: Unknow Exception!" << std::endl;
		return 1;
	}
}



bool checkSentence()
{
	std::string inputWord;
	std::cin >> inputWord;

	if(!isNoun(&inputWord)) return false;

		std::cin >> inputWord;

		if(!isVerb(&inputWord)) return false;

		std::cin >> inputWord;
		if(isConjuction(&inputWord))
		{
			if(checkSentence()) return true;
		}
		else
			if(inputWord == ".") return true;

		return false;
}

bool isConjuction(std::string* inputWord)
{
	static const std::vector<std::string> conjuctions = { "and", "or", "but"};
	if(std::find(conjuctions.begin(), conjuctions.end(), *inputWord) != conjuctions.end())
		return true;
	else
		return false;
}

bool isNoun( std::string* inputWord)
{
	static const std::vector<std::string> nouns = {"birds", "fish", "C++"};
	if(std::find(nouns.begin(), nouns.end(), *inputWord) != nouns.end())
		return true;
	else
		return false;

}

bool isVerb(std::string* inputWord)
{
	static const std::vector<std::string> verbs = { "rules", "fly", "swim"};
	if(std::find(verbs.begin(), verbs.end(), *inputWord) != verbs.end())
		return true;
	else
		return false;
}












