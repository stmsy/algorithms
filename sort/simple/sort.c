#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "simple.h"


int main()
{
    FILE *fp;
    char fname[] = "../../data/numbers.txt";
    int N = 100000;
    int a[N];
    int i, j, tmp, result;
    long start, end;
    double time;

    fp = fopen(fname, "r");

    /* Terminate if failed to open file */
    if (fp == NULL) {
	printf("%s not opened.\n", fname);
        return -1;
    }

    for (i = 0; i < N; i++) {
	fscanf(fp, "%d", &(a[i]));
    }

    fclose(fp);

    printf("sorting...\n");

    /* Sort the array of integers in ascending order */
    start = clock();
    result = simple(a, N);
    end = clock();

    if (result == 0) {
        printf("===============================\n");
        printf("sorted array:\n");

        for (i = 0; i < N; i++) {
            printf("a[%d]: %d\n", i, a[i]);
        }

        printf("===============================\n");
        time = (end - start) / CLOCKS_PER_SEC;
        printf("time elapsed: %f\n", time);

        return 0;
    } else {
        printf("sort failed.\n");
    }
}
