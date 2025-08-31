#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* rand_string(char* c, int size) {
    srand(time(NULL));
    for(int i=0; i<size; i++) {
        c[i]='a' + rand() %26;
    }
    return c;
}