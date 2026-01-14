// File name: 07_pointers_arrays.c

#include <stdio.h>

int main()
{
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

    // Dizinin ilk elemaninin adresi, dizinin adresidir
    int *p_numbers = numbers;
    printf("Dizi adresi: %p\n", (void *)p_numbers);

    // Pointer kullanarak dizinin elemanlarini yazdirma
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++)
        printf("%.2d: %p:\t%d\n", i + 1, (void *)(p_numbers + i), *(p_numbers + i));

    // *(x)        -> x adresindeki deger
    // &(x)        -> x'in adresi
    // *(p + i) == p[i]

    /* =============================================== */

    // Dizinin her elemanina erisim
    printf("\n\n--- Dizinin her elemanina erisim ---\n");

    int masses[5] = {
        // Bu sayilar rastgele secilmistir, amac pointer ve byte erisimini gostermektir
        16843009,
        33686018,
        50529027,
        67372036,
        84215045
    };

    int *p1 = &masses[0];
    int *p4 = &masses[4];

    for (; p1 <= p4; p1++)
        printf("%p:\t%d\n", (void *)p1, *p1);

    /* =============================================== */

    // Dizinin her byte'ina erisim
    printf("\n\n--- Dizinin her byte'ina erisim ---\n");

    unsigned char *c = (unsigned char *)masses;

    for (int i = 0; i < sizeof(masses); i++)
        printf("%.2d: %p:\t%u\n", i + 1, (void *)(c + i), c[i]);

    return 0;
}
