#include "mylibh.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double Perimetr (double a, double b, double c) 
//(a < b+c && b < c+a && c < b+a)
	{
		double P, S, p;
		P = a+b+c;
		printf("Perimetr= %g\n", P);
	}
double Kvadrat	(double a, double b, double c) 

	{
		p = (a+b+c) /2;
		S = (sqrt (p*(p-a)*(p-b)*(p-c)));
		printf("Square= %g", S);
	}
double Check (double a, double b, double c) 

	{
	if (a < b+c && b < c+a && c < b+a)
 		printf ("Good");
 //	else
 //		printf ("Bad");
		
	}
