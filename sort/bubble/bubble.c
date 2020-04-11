#include "bubble.h"

#define swap(x, y) {int temp; tmp = x; x = y; y = tmp;}

int bubble(int a[], int N)
{
    int i, j, tmp;
    for (i = 0; i < N; i++) {
	for (j = 0; j < N - i; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
	    }
	}
    }
    return 0;
}
