#include "simple.h"

#define swap(x, y) {int temp; tmp = x; x = y; y = tmp;}


int simple(int a[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n; i++) {
	for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
	    }
	}
    }
    return 0;
}
