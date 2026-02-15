#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *fp = fopen("mv.txt", "r");

    int r, c;
    fscanf(fp, "%d %d", &r, &c);

    int A[100][100];
    int x[100];
    int y[100];

    clock_t start, end;

    start = clock();

    /* read matrix */
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            fscanf(fp, "%d", &A[i][j]);
        }
    }

    int veclen;
    fscanf(fp, "%d", &veclen);

    /* read vector */
    for (int i = 0; i < veclen; i++) {
        fscanf(fp, "%d", &x[i]);
    }

    fclose(fp);



    for (int i = 0; i < r; i++) {
        y[i] = 0;
        for (int j = 0; j < c; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    end = clock();

   for (int i = 0; i < r; i++)
        printf("%d\n", y[i]);

    printf("Clock Ticks are %ld\n",end-start);

    return 0;
}

