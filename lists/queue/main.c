#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"


int main()
{
    FILE *fp;
    char fname[] = "../../data/evaluations.csv";
    char buff[MAX_CHAR_LENGTH];
    int i;


    struct eval *p;


    fp = fopen(fname, "r");

    /* Terminate if failed to open file */
    if (fp == NULL) {
	printf("%s not opened.\n", fname);
        return -1;
    }



    i = 0;
    while (fgets(buff, MAX_CHAR_LENGTH, fp) != NULL) {
        p = (struct eval *) malloc(sizeof(struct eval));

        strcpy(p->id, strtok(buff, DELIMITER));
	strcpy(p->dname, strtok(NULL, DELIMITER));
	p->score = atoi(strtok(NULL, DELIMITER));

        printf("===========================\n");

	/* printf("id: %s\n", p->id); */
	/* printf("dname: %s\n", p->dname); */
	/* printf("score: %d\n", p->score); */

	i++;
    }

    fclose(fp);

    return 0;
}
