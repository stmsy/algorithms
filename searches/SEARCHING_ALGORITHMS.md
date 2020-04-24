# Searching Algorithms

## Linear Search

```
LINEAR-SEARCH(v, A)
 1 for i = 0 to A.length - 1
 2     if A[i] == v
 3         return i
 4 return -1
```

## Binary Search

```
BINARY-SEARCH(v, A, l, u)
 1 low = l
 2 high = max(l, u + 1)
 3 while low < high
 4     mid = FLOOR((low + high) / 2)
 5	   if v <= A[mid]
 6	       high = mid
 7	   else low = mid + 1
 8 return high
```

where `FLOOR` is the function that returns the largest integer that is smaller than or equal to the input value.
