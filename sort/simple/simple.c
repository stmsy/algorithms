#include "simple.h"

#define swap(x, y) {int temp; tmp = x; x = y; y = tmp;}

int simple(int a[], int N)
{
    int i, j, tmp;
    for (i = 0; i < N; i++) {
	for (j = i+1; j < N; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
	    }
	}
    }
    return 0;
}
