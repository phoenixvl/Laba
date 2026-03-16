#include <math.h>
#include <stdio.h>

int main()
{
	char str [81];
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != '\0'; i++)
	{ 
    if (str[i] == 'a') {
        str[i] = 'A';
    }
    if (str[i] == 'b') {
        str[i] = 'B';
    }
	}
	printf("%s", str);
	return 0;
}
//    if (str[i] == 'a' || str[i] == 'b') {
//        str[i] = str[i] - 32; tablica ASII bolishoi simvol na 32 menishe chem malen'kiy. 
