#include <stdio.h>

int main() {
    FILE *fin, *fout;
    char familyname[64], name[64], ochestvo[64];
    int year;

    fin = fopen("data.txt", "r");

    fout = fopen("result.txt", "w");

    while (fscanf(fin, "%63s %63s %63s %d", familyname, name, ochestvo, &year) == 4) {
        if (year > 1980) {
            fprintf(fout, "%s %s %s %d\n", familyname, name, ochestvo, year);
        }
    }

    fclose(fin);
    fclose(fout);

    printf("data in result.txt\n");

    return 0;
}
