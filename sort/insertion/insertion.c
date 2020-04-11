#include "insertion.h"

int insertion(int a[], int N)
{
    int i, j, tmp;
    for (i = 1; i < N; i++) {
	tmp = a[i];
	for (j = i-1; j >= 0 && a[j] > tmp; j--) {
            a[j+1] = a[j];
        }
	a[j+1] = tmp;
    }
    return 0;
}
