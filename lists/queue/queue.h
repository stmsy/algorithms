#ifndef _STACK_H_INCLUDED_
#define _STACK_H_INCLUDED_

#define MAX_QUEUE_SIZE 100000
#define MAX_CHAR_LENGTH 64
#define DELIMITER ","

typedef struct eval {
    char id[5];
    char dname[MAX_CHAR_LENGTH];
    int score;
    struct eval *next;
} *dtype;

dtype *root = NULL;

#endif
