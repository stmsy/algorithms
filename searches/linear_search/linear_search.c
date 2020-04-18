#include "linear_search.h"


/* Linear search without sentinel */
int linear_search1(int a[], int target, int first, int last)
{
    while (first <= last && a[first] != target)
	first++;
    if (first <= last)
	return first;
    return -1;
}

/* Linear search with sentinel at the `last + 1` position */
int linear_search2(int a[], int target, int first, int last)
{
    if (first > last)
	return -1;
    a[last + 1] = target;
    while (a[first] != target)
	first++;
    if (first <= last)
	return first;
    return -1;
}


/* Linear search with sentinel at the `last` position */
int linear_search3(int a[], int target, int first, int last)
{
    int pivot;
    if (first > last)
	return -1;
    pivot = a[last];
    a[last] = target;
    while (a[first] != target)
	first++;
    /* a[last] = pivot; */
    if (first <= last)
	return first;
    if (target == pivot)
	return last;
    return -1;
}
