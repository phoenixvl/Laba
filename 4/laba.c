#include "mylibh.h"
#include <stdio.h>

int main()
{

	double a, b, c;
	printf ("a=");
	scanf ("%lf", &a);
	
	printf ("b=");
	scanf ("%lf", &b);
		
	printf ("c=");
	scanf ("%lf", &c);

    if (Check(a, b, c)) {
        Perimetr(a, b, c);
        Kvadrat(a, b, c);
    }
	
return 0;
}
