#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//fonksiyonlarin pointerleri: bir ornek:

int topla(int x, int y)
{
    return x + y;
}

int cikart(int x, int y)
{
    return x - y;
}

int carp(int x, int y)
{
    return x * y;
}

int bol(int x, int y)
{
    // y=0 ise -1 döndür
    return (y==0)? -1 : x/y;
}


int main()
{
    int(* p_fonksiyonlar[4])(int, int);
    p_fonksiyonlar[0] = &topla;
    p_fonksiyonlar[1] = &cikart;
    p_fonksiyonlar[2] = &carp;
    p_fonksiyonlar[3] = &bol;

    for(int i=0; i<4; i++)
    {
        printf("%d\n", p_fonksiyonlar[i] (4,5));
    }

    return 0;
}
