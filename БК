#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct point {
    double x;
    double y;
    int num;
} POINT;

POINT p[100000];
int hull[100000];
int hull_size = 0;
int n = 0;

int cmp(const void *a, const void *b) {
    POINT *pa = (POINT *)a;
    POINT *pb = (POINT *)b;
    if (pa->x < pb->x) return -1;
    if (pa->x > pb->x) return  1;
    if (pa->y < pb->y) return -1;
    if (pa->y > pb->y) return  1;
    return 0;
}

double cross(POINT A, POINT B, POINT C) {
    return (B.x - A.x) * (C.y - A.y)
         - (B.y - A.y) * (C.x - A.x);
}

double dist(POINT A, POINT B, POINT C) {
    return fabs(cross(A, B, C));
}

void quickhull(POINT *pts, int m, POINT A, POINT B) {
    if (m == 0) return;


    int idx = 0;
    double maxd = dist(A, B, pts[0]);
    for (int i = 1; i < m; i++) {
        double d = dist(A, B, pts[i]);
        if (d > maxd) { maxd = d; idx = i; }
    }
    POINT C = pts[idx];

    POINT *left1  = (POINT *)malloc(m * sizeof(POINT));
    POINT *left2  = (POINT *)malloc(m * sizeof(POINT));
    int   n1 = 0, n2 = 0;

    for (int i = 0; i < m; i++) {
        if (i == idx) continue;
        if (cross(A, C, pts[i]) > 0)
            left1[n1++] = pts[i];
        else if (cross(C, B, pts[i]) > 0)
            left2[n2++] = pts[i];
    }

    quickhull(left1, n1, A, C);
    hull[hull_size++] = C.num;
    quickhull(left2, n2, C, B);

    free(left1);
    free(left2);
}

int main(void) {
    FILE *In  = fopen("data.txt", "r");
    FILE *Out = fopen("OUT.dat", "w");
    if (!In || !Out) {
        fprintf(stderr, "Cannot open file 'data' (or OUT.dat)\n");
        return 1;
    }

    int num; double x, y;
    while (fscanf(In, "%d%lf%lf", &num, &x, &y) == 3) {
        p[n].num = num;
        p[n].x   = x;
        p[n].y   = y;
        n++;
    }
    fclose(In);

    qsort(p, n, sizeof(POINT), cmp);

    POINT L = p[0];
    POINT R = p[n - 1];


    POINT *upper = (POINT *)malloc(n * sizeof(POINT));
    POINT *lower = (POINT *)malloc(n * sizeof(POINT));
    int nu = 0, nl = 0;

    for (int i = 1; i < n - 1; i++) {
        double c = cross(L, R, p[i]);
        if (c > 0) upper[nu++] = p[i];
        else if (c < 0) lower[nl++] = p[i];
    }


    hull[hull_size++] = L.num;
    quickhull(upper, nu, L, R);
    hull[hull_size++] = R.num;
    quickhull(lower, nl, R, L);

    free(upper);
    free(lower);


    fprintf(Out, "C:\n");
    for (int i = 0; i < hull_size; i++) {
        fprintf(Out, "%d\n", hull[i]);
    }
    fclose(Out);

    printf("Done.%d points. Result in OUT.dat\n", hull_size);
    return 0;
}
