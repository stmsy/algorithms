#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "binary_search.h"


int main()
{
    FILE *fp;
    char fname[] = "../../data/sorted_numbers.txt";
    int n = 100000;
    int a[n];
    int i, target, first, last, result;
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
    target = 8435;
    first = 0;
    last = n - 1;
    start = clock();
    result = binary_search(a, target, first, last);
    end = clock();

    if (result != 0) {
        printf("===============================\n");
        printf("index for %d: %d\n", target, result);
        printf("-------------------------------\n");
        time = (end - start) / CLOCKS_PER_SEC;
        printf("time elapsed: %f\n", time);
    } else {
        printf("search failed.\n");
    }
    return 0;
}
