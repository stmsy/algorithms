#include <stdio.h>
#include "merge_sort.h"


void merge(int a[], int first, int middle, int last)
{
    int i, j, k;
    int n1 = middle - first + 1;
    int n2 = last - middle;

    /* Create temp arrays */
    int b[n1], c[n2];

    /* Copy data to temp arrays b[] and c[] */
    for (i = 0; i < n1; i++)
        b[i] = a[first + i];
    for (j = 0; j < n2; j++)
        c[j] = a[middle + 1 + j];

    /* Merge the temp arrays back into a[first..last]*/
    i = 0;   // Initial index of first subarray
    j = 0;   // Initial index of second subarray
    k = first;   // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of b[], if there are any */
    while (i < n1)
    {
        a[k] = b[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of c[], if there are any */
    while (j < n2)
    {
        a[k] = c[j];
        j++;
        k++;
    }
}

int merge_sort(int a[], int first, int last)
{
    if (first < last) {
        int middle = (first + last) / 2;
        merge_sort(a, first, middle);
        merge_sort(a, middle+1, last);
        merge(a, first, middle, last);
    }
    return 0;
}
