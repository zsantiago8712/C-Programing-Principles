//
// Created by Santiago Zamora on 20/08/21.
//

#include "../Headers/std_lib_facilities.h"

/*
 * double ctok(double c);
 *
 * int main()
 * {
 *      double c = 0;
 *      cin >> d;   // 1.- No exsite esta variable
 *      double k = ctok("c");   // 2.- ctock no resive strings
 *      Cout << k << '\n;       // 3.- Cout esta escrito con mayuscala al inicio cunado se escribe todo en minúscula
 * }
 *
 * double ctok(double c)
 * {
 *      int k = c + 273.15; // 4.- no puedes usar puntis decimales ya que es un int
 *      retunr int          // 5.- no puedes returnar un int y falta un ","
 * }
*/


// Problema corregido

double ctok(double c);

int main()
{
	double c = 0, k;
	std::cin >> c;

	k = ctok(c);
	std::cout << k << std::endl;
}

double ctok(double c)
{
	return c + 273.15;
}

// Fin