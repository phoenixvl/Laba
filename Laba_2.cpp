#include <stdio.h>
//#include <math.h> sprosit'

int main() {
    int N;
    printf("Matrix size = ");
    if (scanf("%d", &N) != 1) return 1;

    double a[N][N], res[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }

    double sum_main = 0, sum_second = 0;
    for (int i = 0; i < N; i++) {
        sum_main += a[i][i];
        sum_second += a[i][N - 1 - i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++) {
                res[i][j] += a[i][k] * a[k][j];
            }
        }
    }

    printf("\nMatrix a^2:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f\t", res[i][j]);
        }
        printf("\n");
    }

    printf("\nsum_main = %g", sum_main);
    printf("\nsum_second = %g\n", sum_second);

    return 0;
}

