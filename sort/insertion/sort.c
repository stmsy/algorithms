#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertion.h"


int main()
{
    FILE *fp;
    char fname[] = "../../data/numbers.txt";
    int n = 100000;
    int a[n];
    int i, j, tmp, result;
    long start, end;
    double time;

    fp = fopen(fname, "r");

    /* Terminate if failed to open file */
    if (fp == NULL) {
	printf("%s not opened.\n", fname);
        return -1;
    }

    for (i = 0; i < n; i++) {
	fscanf(fp, "%d", &(a[i]));
    }

    fclose(fp);

    printf("sorting...\n");

    /* Sort the array of integers in ascending order */
    start = clock();
    result = insertion(a, n);
    end = clock();

    if (result == 0) {
        printf("===============================\n");
        printf("sorted array:\n");

        for (i = 0; i < n; i++) {
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
