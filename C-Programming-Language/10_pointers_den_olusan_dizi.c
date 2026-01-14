#include <stdio.h>
// pointer dizisi (array of pointers):

int main()
{
    /*
    char *argv[]
    veya
    int *g[]
    bunlar birer pointer dizisidir.
    */

    int a = 100, b = 200, c = 300, d = 400;
    int *ph[] = { &a, &b, &c, &d }; // pointer dizisi

    for (int i = 0; i < sizeof(ph) / sizeof(ph[0]); i++)
        printf("%d: %p:\t%d\n", i + 1, ph[i], *(ph[i]));

    return 0;
}
