#include <stdio.h>
// pointer to pointer (pointerin pointeri)
int main()
{
    // %p --> adres yazdirir (hexadecimal)
    int d = 12;
    int *pd = &d;
    int **ppd = &pd;

    printf("---*pointer to pointer*---\n");

    printf("%d \n", 12);      // --> 12
    printf("%d \n", d);       // --> d'nin degeri (12)
    printf("%p \n", &d);      // --> d'nin adresi
    printf("%p \n", pd);      // --> pd'nin degeri = d'nin adresi
    printf("%d \n", *pd);     // --> pd'nin gosterdigi deger = 12
    printf("%p \n", ppd);     // --> ppd'nin degeri = pd'nin adresi
    printf("%p \n", *ppd);    // --> ppd'nin gosterdigi deger = pd = d'nin adresi
    printf("%d \n", **ppd);   // --> d'nin degeri = 12

    return 0;
}
