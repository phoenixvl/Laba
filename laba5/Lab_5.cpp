#include <stdio.h>
#include <stdlib.h>

int main() {
		
    int x;
    printf("Matrix_size = ");
    if (scanf("%d", &x) != 1) return 1;
    
    double **a = (double**)malloc(x * sizeof(double*));
    for (int i = 0; i < x; i++) {
        a[i] = (double*)malloc(x * sizeof(double));
    }
	printf ("\nFirst_Matrix\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    
    double **b = (double**)malloc(x * sizeof(double*));
    for (int n = 0; n < x; n++) {
        b[n] = (double*)malloc(x * sizeof(double));
    }
    printf ("\nSecond_Matrix\n");
    for (int n = 0; n < x; n++) {
        for (int m = 0; m < x; m++) {
            printf("b[%d][%d] = ", n, m);
            scanf("%lf", &b[n][m]);
        }
    }    
    double **c = (double**)malloc(x * sizeof(double*));
    for (int q = 0; q < x; q++) {
        c[q] = (double*)malloc(q * sizeof(double));
    }
    for (int q = 0; q < x; q++) free(c[q]);
    free (c);   
    for (int i = 0; i < x; i++) free(a[i]);
    free (a);
    for (int n = 0; n < x; n++) free(b[n]);
    free(b);

    return 0;
}

