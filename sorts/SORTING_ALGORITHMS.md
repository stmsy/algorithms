# Sorting Algorithms

## Simple Sort

```
SIMPLE-SORT(A)
 1 for i = 0 to A.length - 1
 2     for j = i + 1 to A.length - 1
 3         if A[i] > A[j]
 4             exchange A[j] with A[i]
 5         j = j + 1
 6     i = i + 1
```

## Bubble Sort

```
BUBBLE-SORT(A)
 1 for i = 0 to A.length - 1
 2     for j = 0 to A.length - 1 - i
 3         if A[j] > A[j+1]
 4             exchange A[j+1] with A[j]
 5         j = j + 1
 6     i = i + 1
```

## Insertion Sort

```
INSERTION-SORT(A)
 1 for i = 1 to A.length - 1
 2     key = A[i]
 3     // Insert A[i] into the sorted subsequence A[0, i-1]
 4     j = i - 1
 5     while j > 0 and A[j] > key
 6         A[j + 1] = A[j]
 7         j = j - 1
 8     A[j + 1] = key
```

## Selection Sort

```
SELECTION-SORT(A)
 1 for i = 0 to A.length - 1
 2     k = i
 3     key = A[i]
 4     for j = i + 1 to A.length - 1
 5         if A[j] < key
 6             k = j
 7             key = A[j]
 8         j = j + 1
 9     A[k] = A[i]
10     A[i] = key
11     i = i + 1
```

## Quick Sort

```
PARTITION(A, l, u)
 1 x = A[u]
 2 i = l - 1
 3 for j = l to u - 1
 4     if A[j] <= x
 5         i = i + 1
 6         exchange A[i] with A[j]
 7 exchage A[i + 1] with A[u]
 8 return i + 1

QUICK-SORT(A, l, u)
 1 if l < u
 2     m = PARTITION(A, l, u)
 3     QUICK-SORT(A, l, m)
 4     QUICK-SORT(A, m+1, u)
```

## Merge Sort

```
MERGE(A, l, m, u)
 1 n1 = m - l + 1
 2 n2 = u - m
 3 let L[0..n1] and R[0..n2] be new arrays
 4 for i = 0 to n1-1
 5     L[i] = A[l + i]
 5 for j = 0 to n2-1
 6     R[j] = A[m + j + 1]
 7 L[n1] = inf
 8 R[n2] = inf
 9 i = 1
10 j = 1
11 for k = p to r
12     if L[i] <= R[j]
13         A[k] = L[i]
14         i = i + 1
15     else A[k] = R[j]
16         j = j + 1

MERGE-SORT(A, l, u)
 1  if l < u
 2      m = FLOOR((l + u) / 2)
 3      MERGE-SORT(A, l, m)
 4      MERGE-SORT(A, m+1, u)
 5      MERGE(A, l, m, u)`
```

where `FLOOR` is the function that returns the largest integer that is smaller than or equal to the input value.

## Reference

1. Cormen, Thomas H, and Thomas H. Cormen. *Introduction to Algorithms*. Cambridge, Mass: MIT Press, 2001. Print.
