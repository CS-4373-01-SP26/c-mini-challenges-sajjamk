#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 100000000

int main() {
    double a = 1.234567, b = 2.345678, c = 0.0;
    clock_t t;

    t = clock();
    for (int i = 0; i < N; i++)
        c = a * b;
    printf("*     : %f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    t = clock();
    for (int i = 0; i < N; i++)
        c = a / b;
    printf("/     : %f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    t = clock();
    for (int i = 0; i < N; i++)
        c = sqrt(a);
    printf("sqrt  : %f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    t = clock();
    for (int i = 0; i < N; i++)
        c = sin(a);
    printf("sin   : %f\n", (double)(clock() - t) / CLOCKS_PER_SEC);

    return 0;
}
