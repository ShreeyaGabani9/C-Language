#include <stdio.h>
main()
{
    // Datatype arrayName[size];

    // Datatype arrayName[size] = {values/elements};

    int marks[] = {10, 20, 30, 40, 50};
    int i;
    // index  =>     0  1  2  3  4

    // marks[0] = 56;
    // marks[1] = 87;
    // marks[2] = 93;
    // marks[3] = 45;
    // marks[4] = 63;

    for (i = 0; i <= 4; i++)
        printf("Mark %d: %d\n", i + 1, marks[i]);
}