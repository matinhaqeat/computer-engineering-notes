#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
int f(int);          // fonksiyon bildirimi
int (*pf)(int);      // fonksiyon pointer bildirimi
pf = &f;             // f'nin adresini pf'ye ata
*/

int topla(int x, int y)                   // 1. fonksiyon
{
    return x + y;
}

int random()
{
    return rand() % 10 + 1;
}

int main()
{
    srand(time(NULL));

    /** 1. fonksiyon **/
    int (*p_topla)(int, int);              // 1. fonksiyon pointer bildirimi
    p_topla = &topla;                      // topla'nin adresini p_topla'ya ata
    printf("4+5=%d\n", p_topla(4, 5));     // fonksiyon cagrisi

    /** 2. fonksiyon **/
    int (*p_random)(void) = &random;
    printf("%d\n", p_random());             // fonksiyon cagrisi

    return 0;
}
