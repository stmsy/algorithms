#include <stdio.h>
#include "queue.h"


int enqueue(struct eval *r)
{
    struct eval *p;

    if (root == NULL)
	root = r;
    else {
	p = root;
	while (p->next != NULL)
	    p = p->next;
	p->next = r;
    }
    r->next = NULL;
    return 0;
}

struct eval *dequeue()
{
    struct eval *p;

    if (root == NULL)
	return root;
    p = root;
    root = p->next;
    return p;
}
