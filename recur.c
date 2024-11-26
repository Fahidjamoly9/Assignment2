#include <stdio.h>
#include <stdlib.h>

extern double stuff;

/* A recursive function */
int recur(int i, float j, char k) {
    /* A stack allocated variable within a recursive function */
    int localInt = i;
    float localFloat = j;
    char localChar = k;
    double localArr[1024];

    /* Correct printing of addresses */
    printf("recursive call %d: parameter int %d @ %p\n", i, i, (void *)&i);
    printf("recursive call %d: parameter float %2.2f @ %p\n", i, j, (void *)&j);
    printf("recursive call %d: parameter char %c @ %p\n", i, k, (void *)&k);

    printf("recursive call %d: stack int %i @ %p\n", i, localInt, (void *)&localInt);
    printf("recursive call %d: stack float %2.2f @ %p\n", i, localFloat, (void *)&localFloat);
    printf("recursive call %d: stack char %c @ %p\n", i, localChar, (void *)&localChar);
    printf("recursive call %d: stack double[] %2.2f @ %p\n", i, localArr[0], (void *)localArr);

    /* Static variable address */
    printf("static data: stuff %2.2f @ %p\n\n", stuff, (void *)&stuff);

    if (i > 0) {
        return recur(i - 1, j - 1.5, k + 1);
    }

    return 0;
}


