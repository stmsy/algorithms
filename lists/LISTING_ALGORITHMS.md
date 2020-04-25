# Listing Algorithms

## Stack

```
STACK-EMPTY(S)
 1 if S.top == 0
 2    return TRUE
 3 else return FALSE

PUSH(v, S)
 1 S.top = S.top + 1
 2 S[S.top] = v

POP(S)
 1 if STACK-EMPTY(S)
 2     error "underflow"
 3 else S.top = S.top - 1
 4     return S[S.top + 1]
```

## Reference

1. Cormen, Thomas H, and Thomas H. Cormen. *Introduction to Algorithms*. Cambridge, Mass: MIT Press, 2001. Print.
