#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 64
#define DELIMITER ","


int main()
{
    FILE *fp;
    char fname[] = "../../data/evaluations.csv";
    char buff[MAX_LENGTH];
    int i;
    int n = 100000;
    typedef struct {
        char id[32];
        char dname[32];
        int score;
    } EVAL;
    EVAL evals[n];

    fp = fopen(fname, "r");

    /* Terminate if failed to open file */
    if (fp == NULL) {
	printf("%s not opened.\n", fname);
        return -1;
    }

    i = 0;
    while (fgets(buff, MAX_LENGTH, fp) != NULL) {
        strcpy(evals[i].id, strtok(buff, DELIMITER));
	strcpy(evals[i].dname, strtok(NULL, DELIMITER));
	evals[i].score = atoi(strtok(NULL, DELIMITER));
	i++;
    }

    fclose(fp);

    for (i = 0; i < n; i++) {
    	printf("%s %s %d\n", evals[i].id, evals[i].dname, evals[i].score);
    }

    return 0;
}
