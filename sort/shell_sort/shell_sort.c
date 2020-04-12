#include "shell_sort.h"


int shell_sort(int a[], int n)
{
    int i, j, h, tmp;
    for (h = n/2; h > 0; h = h/2) {
        for (i = h; i < n; i++) {
	    tmp = a[i];
	    for (j = i-h; j >= h-1 && a[j] > tmp; j -= h) {
		a[j+h] = a[j];
	    }
	    a[j+h] = tmp;
	}
    }
    return 0;
}
