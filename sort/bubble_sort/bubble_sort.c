#include "bubble_sort.h"

#define swap(x, y) {int tmp; tmp = x; x = y; y = tmp;}


int bubble_sort(int a[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n; i++) {
	for (j = 0; j < n - i; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
	    }
	}
    }
    return 0;
}
