#include "binary_search.h"


int binary_search(int a[], int target, int first, int last)
{
    int middle;
    while (first <= last)
    {
	middle = (first + last) / 2;
	if (target == a[middle])
	    return middle;
	else if (target < a[middle])
	    last = middle - 1;
	else
	    first = middle + 1;
    }
    return -1;
}
