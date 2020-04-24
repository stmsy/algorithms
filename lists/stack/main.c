#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"


int main()
{
    FILE *fp;
    char fname[] = "../../data/domain_names.txt";
    char buff[MAX_CHAR_LENGTH];
    typedef struct {
	char elem[MAX_CHAR_LENGTH];
    } DNAME;
    DNAME dnames[MAX_STACK_SIZE];
    int i;
    int res;
    top = -1;
    pid = &id;

    fp = fopen(fname, "r");

    /* Terminate if failed to open file */
    if (fp == NULL) {
	printf("%s not opened.\n", fname);
        return -1;
    }

    i = 0;
    while (fgets(buff, MAX_CHAR_LENGTH, fp) != NULL) {
        strcpy(dnames[i].elem, buff);
	i++;
    }

    fclose(fp);

    printf("===========================\n");

    for (i = 0; i < MAX_STACK_SIZE; i++)
	printf("%d %s", i, dnames[i].elem);

    printf("===========================\n");

    int ids[10] = {1, 0, 2, 4, 5, 7, 6, 8, 9, 3};
    for (i = 0; i < MAX_STACK_SIZE; i++) {
    	push(ids[i]);
    	printf("%d %d %s", top, ids[i], dnames[ids[i]].elem);
    }

    printf("===========================\n");

    id = peek();
    printf("top: %s", dnames[id].elem);

    printf("===========================\n");

    for (i = 0; i < MAX_STACK_SIZE; i++) {
        pop(&id);
        printf("popped: %s", dnames[id].elem);
    }

    res = pop(&id);
    if (res == -1)
        printf("stack emptied.\n");

    return 0;
}
