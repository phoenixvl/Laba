#include <math.h>
#include <stdio.h>

int main()
{
	char otvet;
	do{
		double a;
		printf ("a=");
		scanf ("%Lf", &a);
		
		double b;
		printf ("b=");
		scanf ("%Lf", &b);
		
		double c;
		printf ("c=");
		scanf ("%Lf", &c);
		
		double x1, x2, d;
		
		d = pow(b,2)- 4*a*c;
		printf ("d = %Lf \n", d);
		
		if (d>0)
		{
			x1 = (-b + sqrt(d))/(2*a);
			printf ("x1 = %lf \n", x1);
			
			x2 = (-b - sqrt(d))/(2*a);
			printf ("x2 = %lf \n", x2);
		}
		else if (d==0)
		{
			x1 = -b/(2*a);
			printf ("x1 = %lf, \n", x1);
		}
		else
		{
			printf ("d < 0");
		}
		printf ("\nPovtor? y/n: ");
		scanf (" %c", &otvet);
		
	}while ( otvet == 'y');
		
		printf ("End.");
		return 0;
}
