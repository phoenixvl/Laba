#include "mylibh.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double Perimetr (double a, double b, double c) 

	{
		double P;
		P = a+b+c;
		printf("Perimetr= %g\n", P);
	}
double Kvadrat (double a, double b, double c) 

	{
		double S, p;
		p = (a+b+c) /2;
		S = (sqrt (p*(p-a)*(p-b)*(p-c)));
		printf("\nSquare= %g\n", S);
	}

double Check (double a, double b, double c)
	
	{
	    if (a < b + c && b < c + a && c < a + b)
		{
	        printf ("Good");
	        return 1;
	    } 
		else
		{
	    	printf ("Bad");
	    	return 0;
	    }
	}
