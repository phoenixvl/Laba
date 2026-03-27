#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main() {
    int x, i, j, n, m;
    printf("Matrix_size = ");
    if (scanf("%d", &x) != 1) return 1;
    
	double **a = (double**)malloc(x * sizeof(double*));
    for (i = 0; i < x; i++) {
        a[i] = (double*)malloc(x * sizeof(double));
    }
	printf ("\nFirst_Matrix\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    
    double **b = (double**)malloc(x * sizeof(double*));
    for (n = 0; n < x; n++) {
        b[n] = (double*)malloc(x * sizeof(double));
    }
    printf ("\nSecond_Matrix\n");
    for (n = 0; n < x; n++) {
        for (m = 0; m < x; m++) {
            printf("b[%d][%d] = ", n, m);
            scanf("%lf", &b[n][m]);
        }
    }

    char op;
    printf("(+, -, *): ");
    scanf(" %c", &op);
	
    double **result = NULL;
    if (op == '+') result = summ(a, b, x);
    else if (op == '-') result = sub(a, b, x);
    else if (op == '*') result = mult(a, b, x);

    printf("\nResult\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("%g ", result[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < x; i++) free(a[i]);
    free(a);
    for (i = 0; i < x; i++) free(b[i]);
    free(b);
    for (i = 0; i < x; i++) free(result[i]);
    free(result);
    
    return 0;
}
