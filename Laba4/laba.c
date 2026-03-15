#include "mylibh.h"
#include <stdio.h>

int main()
{

	double a, b, c;
	printf ("a=");
	scanf ("%Lf", &a);
	
	printf ("b=");
	scanf ("%Lf", &b);
		
	printf ("c=");
	scanf ("%Lf", &c);
		
	myFunction (a, b, c);
			
	return 0;
}
