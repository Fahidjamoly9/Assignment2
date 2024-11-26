#include <stdio.h>
#include <stdlib.h>

/* A recursive function */
int recur(int i, float j, char k); 

/* Statically allocated variable */
int foo;
/* Statically allocated, pre-initialized variables */
double stuff = 7;
float bar = 4.5;

int main(int argc, char *argv[]) {
    /* A stack allocated variable */
    int i;

    /* Dynamically allocate some stuff */
    char *buf1 = malloc(180);
    char *buf2 = malloc(180);

    printf("_main @ %p\n", (void *)&main);
    printf("recur @ %p\n", (void *)&recur);

    /* Correct printing of stack variable */
    printf("_main stack: %p\n", (void *)&i);

    /* Correct printing of static variables */
    printf("static data: stuff %p\n", (void *)&stuff);
    printf("static data: bar   %p\n", (void *)&bar);
    printf("static data: foo   %p\n", (void *)&foo);
    
    printf("Heap: malloc 1: %p\n", (void *)buf1);
    printf("Heap: malloc 2: %p\n", (void *)buf2);

    recur(2, bar, 'a');
	
    free(buf1);
    free(buf2);

    return 0;
}

