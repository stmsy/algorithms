#include "quick_sort.h"

#define swap(x, y) {int tmp; tmp = x; x = y; y = tmp;}


int quick_sort(int a[], int first, int last)
{
    int i, j, middle, pivot;
    if (first >= last)
	return -1;
    middle = (first + last) / 2;
    pivot = a[middle];
    i = first; j = last;
    while (i <= j) {
        while (a[i] < pivot)
	    i++;
	while (a[j] > pivot)
	    j--;
	if (i <= j) {
            swap(a[i], a[j]);
	    i++; j--;
	}
    };
    quick_sort(a, first, j);
    quick_sort(a, i, last);
    return 0;
}
