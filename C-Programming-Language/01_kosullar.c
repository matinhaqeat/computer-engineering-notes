#include <stdio.h>

// Conditions, loops, and ternary operator

int main()
{
    /**
    &&       and / ve
    ||       or  / veya
    !        not / değil
    **/

    int x = 45;

    /** if-else if-else **/
    if (x > 0) {
        printf("x is positive\n");
    } else if (x == 0) {
        printf("x is zero\n");
    } else {
        printf("x is negative\n");
    }

    /** switch **/
    switch(x) {
    case 1:
        printf("x is 1\n");
        break;
    case 2:
        printf("x is 2\n");
        break;
    default:
        printf("x is something else\n");
        break;
    }

    /** for loop **/
    for(int i=0; i<5; i++) {
        printf("i = %d\n", i);
    }

    /** while loop **/
    while(x > 40) { // just to show example
        x--;
    }

    /** do-while loop **/
    do {
        x--;
    } while(x > 35);

    /** break & continue example **/
    for(int i=0; i<10; i++){
        if(i==5) break;
        if(i%2==0) continue;
    }

    /** ternary **/
    int y = (x>0) ? 1 : -1;
    printf("y = %d\n", (x==4)? 4 : -1);

    return 0;
}
