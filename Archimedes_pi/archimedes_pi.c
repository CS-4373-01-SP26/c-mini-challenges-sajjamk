#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{   clock_t start,end;
    double cpu_time;

    /*Archimedes Algorithm start with hexagon*/
    int n = 6;
    double a = 2.0 * sqrt(3.0);
    double b = 3.0;

    printf("Archimedes Algorithm bounds of Pi\n");
    printf("n  b(lower)  a(upper)\n");


    start = clock();

    while (n <= 10000000){

        printf("%d  %f  %f\n", n, b, a);

        /*circumscribed (upper bound) */
        double a_next = (2.0 * a * b)/(a + b);

        /*inscribed (lower bound) */
        double b_next = sqrt (a_next * b);


        a = a_next;
        b = b_next;
        n *= 2;

    }

    end = clock();

    cpu_time = (double)(end - start)/CLOCKS_PER_SEC;

    printf("CPU Time :%f sec\n", cpu_time);
    printf("Clock Ticks are %ld\n",end-start);

    return 0;
}
