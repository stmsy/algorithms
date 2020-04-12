#include "selection.h"


int selection(int a[], int n)
{
    int i, j, k, min;
    for (i = 0; i < n; i++) {
	k = i; min = a[i];
	for (j = i+1; j < n; j++) {
            if (a[j] < min) {
                k = j; min = a[j];
	    }
	}
	a[k] = a[i]; a[i] = min;
    }
    return 0;
}
