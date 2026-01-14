#include <stdio.h>
// fonksiyonlarla pointer kullanimi:

void takas(int a, int b)
{
    int z;
    z = a;
    a = b;
    b = z;
}
// calismaz! cunku deger kopyasi uzerinden islem yapilir, pointer gerekir

void swap_numbers(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

double average(double *pd, int N)
{
    // dizi adres ile gonderildiginde boyutu da gonderilmelidir
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += pd[i];   // veya: *(pd + i)
    }
    return sum / N;
}

int main()
{
    // average fonksiyonu:
    printf("---*average function*---\n");
    double numbers[4] = {12, 13, 14, 15};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    double *pnumbers = &numbers[0];
    double Average = average(pnumbers, length);
    printf("average: %.3f\n", Average);

    // swap_numbers fonksiyonu:
    printf("\n\n---*swap_numbers function*---\n");
    int a = 3, b = 5;
    int *pa = &a, *pb = &b;
    printf("before: %d   %d\n", a, b);
    swap_numbers(pa, pb);
    printf("after:  %d   %d\n", a, b);

    return 0;
}
