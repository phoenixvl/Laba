#include <stdio.h>
//#include <math.h> sprosit'

int main() {
    int N,M;
    printf("Matrix_size_1 = ");
    if (scanf("%d", &N) != 1) return 1;
    printf("Matrix_size_2 = ");
    if (scanf("%d", &M) != 1) return 1;
    double plus[N][N], minus[N][N], multiply[N][N], plus_1[M][M], minus_1[M][M], multiply_1[M][M];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Matrix_1[%d][%d] = ", i, j);
            scanf("%lf", &plus[i][j]);
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("Matrix_2[%d][%d] = ", i, j);
            scanf("%lf", &plus_1[i][j]);
        }
    }     
    return 0;
}
