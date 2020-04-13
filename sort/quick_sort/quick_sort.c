#include "quick_sort.h"

#define swap(x, y) {int tmp; tmp = x; x = y; y = tmp;}


int quick_sort(int a[], int left, int right)
{
    int i, j, middle, pivot;
    if (left >= right)
	return 0;
    middle = (left + right) / 2;
    pivot = a[middle];
    i = left; j = right;
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
    quick_sort(a, left, j);
    quick_sort(a, i, right);
    return 0;
}
