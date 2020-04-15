# Sorting Algorithms

## Merge Sort

```
MERGE(A, l, m, u)
 1 n1 = m - l + 1
 2 n2 = u - m
 3 let L[0..n1] and R[0..n2] be new arrays
 4 for i = 0 to n1-1
 5     L[i] = A[l + i]
 5 for j = 0 to n2-1
 6     L[j] = A[m + j + 1]
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
