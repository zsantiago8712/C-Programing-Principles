//
// Created by Santiago Zamora on 20/08/21.
//

#include "../Headers/std_lib_facilities.h"

void chicharronera(float a, float b, float c, double* answer1, double* answer2);

int main()
{
	float a, b, c;
	double answer1, answer2;

	std::cout << "Enter the float a, b, c for the quadratic formula" << std::endl;

	std::cin >> a >> b >> c;

	chicharronera(a, b, c, &answer1, &answer2);
	std::cout << "x1 = " << answer1 << "\n x2 = " << answer2 << std::endl;


}


void chicharronera(float a, float b, float c, double* answer1, double* answer2)
{
	float tempb = b;
	double sqrtAnswer;


	tempb *= -1;

	sqrtAnswer = pow(b, 2);
	sqrtAnswer -= (4 * a * c);
	if(sqrtAnswer < 0)
		error("ERROR: Square cant be negative");

	*answer1 = (tempb + sqrt(sqrtAnswer)) / (2*a);
	*answer2 = (tempb - sqrt(sqrtAnswer)) / (2*a);

}
