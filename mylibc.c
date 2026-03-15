#include "mylibh.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void myFunction(double a, double b, double c) 
{
	if (a < b+c && b < c+a && c < b+a)
	{
		double P, S, p;
		P = a+b+c;
		printf("Perimetr= %g\n", P);
			
		p = (a+b+c) /2;
		S = (sqrt (p*(p-a)*(p-b)*(p-c)));
		printf("Square= %g", S);
	}
	else
	{
		exit (0);
	}
}

